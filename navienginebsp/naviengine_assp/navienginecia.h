/*
* Copyright (c) 2008-2009 Nokia Corporation and/or its subsidiary(-ies).
* All rights reserved.
* This component and the accompanying materials are made available
* under the terms of "Eclipse Public License v1.0"
* which accompanies this distribution, and is available
* at the URL "http://www.eclipse.org/legal/epl-v10.html".
*
* Initial Contributors:
* Nokia Corporation - initial contribution.
*
* Contributors:
*
* Description:  
* naviengine_assp\navienginecia.h
*
*/



#ifndef __NAVIENGINECIA_H__
#define __NAVIENGINECIA_H__

// CIA symbols for ASSP code?
#if defined(__GCC32__)
// CIA symbol macros for Gcc98r2
#define CSM_ZN7NTimerQ4TickEv " Tick__7NTimerQ"
#elif defined(__ARMCC__)
// CIA symbol macros for RVCT
#define CSM_ZN7NTimerQ4TickEv " __cpp(NTimerQ::Tick)"
#else
// CIA symbol macros for EABI assemblers
#define CSM_ZN7NTimerQ4TickEv " _ZN7NTimerQ4TickEv"
#endif


#endif
