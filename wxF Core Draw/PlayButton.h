#pragma once
#include "Button.h"

class PlayButton :
	public Button
{

public:
	/*wxBitmap *playButtonImage;
	wxBitmap *playButtonImageHover;*/

	PlayButton();
	~PlayButton();
	virtual bool checkMouse(int x, int y);
	virtual void DrawButton(wxPaintDC &pdc);
};

