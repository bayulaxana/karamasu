#pragma once
#include "wx/wx.h"
#include "SwitchFrame.h"

class BoxArray;

class GameWindow
	: public wxWindow
{
public:
	GameWindow(SwitchFrame *parent);
	void OnMouseEvent(wxMouseEvent &event);
	void OnTimer(wxTimerEvent &event);
	void OnPaint(wxPaintEvent &event);
	~GameWindow();
private:
	wxTimer *timer;
	wxBitmap *backgroundImage = nullptr;
	
	BoxArray *boxes;
	void LoadImageBackground();
	wxDECLARE_EVENT_TABLE();
};

