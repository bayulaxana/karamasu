#pragma once
#include "Button.h"

class BackButton :
	public Button
{
public:
	BackButton(int type);
	~BackButton();
	virtual bool checkMouse(int x, int y);
	virtual void DrawButton(wxPaintDC &pdc);
};

