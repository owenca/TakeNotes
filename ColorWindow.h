/*
 * Copyright 2009, Ilio Catallo, Stefano Celentano, Eleonora Ciceri, all rights reserved
 * Distribuited under the terms of the GPL v2 license
 * 
 * Authors:
 *
 *			Ilio Catallo
 *			Eleonora Ciceri
 * 
 * Last revision: Eleonora Ciceri, 14th May 2009
 *
 * Description: TODO
 */


#ifndef COLOR_WINDOW_H
#define COLOR_WINDOW_H

#include "ColorView.h"

#include <Window.h>


// Declaration of the class
class ColorWindow : public BWindow {
	
	public:
		
					 ColorWindow(BRect frame, BHandler *handler);
		virtual bool QuitRequested();
	
	private:
	
		BColorControl 	*fColorControl;	
		ColorView 	 	*fColorView;
		BMessenger		*fMessenger;
};

#endif