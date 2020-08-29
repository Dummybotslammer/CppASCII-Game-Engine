#pragma once

#include "stdafx.h"
#include <iostream>
#include <Windows.h> //To render

class graphicsRender {
public:
	void setPixel(int x, int y, COLORREF color) { 
		SetPixel(consoleHdc, x, y, color);
	}

	void drawQuad(int x, int y, int width, int height, COLORREF color) {
		// x and y starts at the top left corner
		for (int i= 0; i < width*height; i++) {
			SetPixel(consoleHdc, x+(i%width), int(i/width), color);
		}
	}

	int getMode() {
		return graphicsMode;
	}

	HWND getHWND() {
		return consoleHWND;
	}

	HDC getHDC() {
		return consoleHdc;
	}

private:
	HWND consoleHWND = GetConsoleWindow();
	HDC consoleHdc = GetDC(consoleHWND);
	int graphicsMode = 0;
	//0 is graphics
	//1 is ascii

//public:
};
