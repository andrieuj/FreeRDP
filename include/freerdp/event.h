/**
 * FreeRDP: A Remote Desktop Protocol Implementation
 * Event Definitions
 *
 * Copyright 2013 Marc-Andre Moreau <marcandre.moreau@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef FREERDP_EVENT_H
#define FREERDP_EVENT_H

#include <freerdp/api.h>
#include <freerdp/freerdp.h>

#ifdef	__cplusplus
extern "C" {
#endif

#define FREERDP_WINDOW_STATE_NORMAL		0
#define FREERDP_WINDOW_STATE_MINIMIZED		1
#define FREERDP_WINDOW_STATE_MAXIMIZED		2
#define FREERDP_WINDOW_STATE_FULLSCREEN		3
#define FREERDP_WINDOW_STATE_ACTIVE		4

DEFINE_EVENT_BEGIN(WindowStateChange)
	int state;
DEFINE_EVENT_END(WindowStateChange)

DEFINE_EVENT_BEGIN(ResizeWindow)
	int width;
	int height;
DEFINE_EVENT_END(ResizeWindow)
	
DEFINE_EVENT_BEGIN(EmbedWindow)
	BOOL embed;
	void* handle;
DEFINE_EVENT_END(EmbedWindow)

DEFINE_EVENT_BEGIN(PanningChange)
	int XPan;
	int YPan;
DEFINE_EVENT_END(PanningChange)

DEFINE_EVENT_BEGIN(ScalingFactorChange)
	double ScalingFactor;
DEFINE_EVENT_END(ScalingFactorChange)

DEFINE_EVENT_BEGIN(ErrorInfo)
	UINT32 code;
DEFINE_EVENT_END(ErrorInfo)

DEFINE_EVENT_BEGIN(ParamChange)
	int id;
DEFINE_EVENT_END(ParamChange)

DEFINE_EVENT_BEGIN(Terminate)
	int code;
DEFINE_EVENT_END(Terminate)

#ifdef	__cplusplus
}
#endif

#endif	/* FREERDP_EVENT_H */
