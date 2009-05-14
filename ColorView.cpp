/*
 * Copyright 2009, Ilio Catallo, Stefano Celentano, Eleonora Ciceri, all rights reserved
 * Distribuited under the terms of the GPL v2 license
 * 
 * Authors:
 *
 *			Ilio Catallo
 *			Eleonora Ciceri
 * 
 * Last revision: Eleonora Ciceri, 13th May 2009
 *
 * Description: TODO
 */

#include "ColorView.h"
#include "StringView.h"

// Messages
#define COLOR_CHANGED 'ccrq'

// Constructor
ColorView :: ColorView(BRect rect, char *name,BHandler *handler)
	   	  : BView(rect, name, B_FOLLOW_ALL, B_WILL_DRAW){
}

// Font
void ColorView :: AttachedToWindow() {
	SetFont (be_bold_font);
	SetFontSize(12);
}

// Drawing the window
void ColorView :: Draw (BRect updateRect) {
	// Variables
	BStringView *instructions;
	BRect frame(10,20,600,35);
	const char *text = "Close the window to apply the changes";

	instructions = new BStringView (frame, "instructions", text);
	instructions -> SetFont(be_bold_font);
	instructions -> SetFontSize(14);
	AddChild(instructions);	
}

// When the user clicks...
void ColorView :: MouseDown(BPoint point) {
	
}