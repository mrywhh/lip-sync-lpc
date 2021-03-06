#ifndef _ERPWindow_h_
#define _ERPWindow_h_
/* ERPWindow.h
 *
 * Copyright (C) 2012 Paul Boersma
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or (at
 * your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include "SoundEditor.h"
#include "ERP.h"

Thing_define (ERPWindow, SoundEditor) {
	public:
	// overridden methods:
		virtual const wchar * v_getChannelName (long channelNumber) {
			ERP erp = (ERP) this -> data;
			return erp -> d_channelNames [channelNumber];
		}
		static bool s_showSelectionViewer;
		virtual bool * vs_showSelectionViewer () { return & s_showSelectionViewer; }
		virtual void v_drawSelectionViewer ();
};

ERPWindow ERPWindow_create (GuiObject parent, const wchar *title, ERP data);

void ERPWindow_preferences (void);

/* End of file ERPWindow.h */
#endif
