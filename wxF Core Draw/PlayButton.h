#pragma once
#include "Button.h"

class PlayButton :
	public Button
{

public:

	PlayButton();
	PlayButton(wxWindow *parent);
	~PlayButton();
	virtual void LoadImages();
};

