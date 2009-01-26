// Copyright (C) 2003-2008 Dolphin Project.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, version 2.0.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License 2.0 for more details.

// A copy of the GPL 2.0 should have been included with the program.
// If not, see http://www.gnu.org/licenses/

// Official SVN repository and contact information can be found at
// http://code.google.com/p/dolphin-emu/

#ifndef MAIN_H
#define MAIN_H

//////////////////////////////////////////////////////////////////////////////////////////
// Includes
// ����������
#include <iostream> // System
#if defined(HAVE_WX) && HAVE_WX
	#include "ConfigDlg.h"
#endif
////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
// Definitions
// ���������
#ifndef _WIN32
	#define Sleep(x) usleep(x*1000)
#endif
////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
// Declarations
// ���������
void DoInitialize();

#ifndef EXCLUDEMAIN_H
	extern bool g_EmulatorRunning;
	extern bool g_FrameOpen;
	extern bool g_RealWiiMotePresent;
	extern bool g_RealWiiMoteInitialized;
	extern bool g_EmulatedWiiMoteInitialized;
	
	#if defined(HAVE_WX) && HAVE_WX
		extern ConfigDialog *frame;
	#endif
#endif
////////////////////////////////


#endif // MAIN_H