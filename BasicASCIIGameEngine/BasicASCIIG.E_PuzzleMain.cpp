// BasicASCIIPuzzleGame.cpp : Defines the entry point for the console application.
//This is the main function.

#include "stdafx.h"//ease on compiler
#include <Windows.h>//Windows api for screen buffer
#include <iostream>//Basic Input and Output
#include <conio.h>//Input
#include <fstream>//File reading.
#include "terminalRender.h" // Our renner
#include "playerClass.h"//We dont need to include the .cpp files because they are used by the header files.
using namespace std;

//using namespace is not gud but luckily im not using any other namespaces.
//Basic libraries and classes
//This game is used to test the capabilities of the engine.

player activePlayer(0,0,1,1,'@');
graphicsRender renderer;

/* redundant code for now
const int map1rows = 10;
const int map1columns = 11;
wchar_t map1[map1rows][map1columns] = {	{'.','.','.','.','.','.', '.', '.', '.', '.'},
										{'.', '.', '.', '.', '.', '.', '.', '.', '.'},
										{'.', '.', '.', '.', '.', '.', '.', '.', '.'},
										{'.', '.', '.', '.', '.', '.', '.', '.', '.'},
										{'.', '.', '.', '.', '.', '.', '.', '.', '.'},
										{'.', '.', '.', '.', '.', '.', '.', '.', '.'},
										{'.', '.', '.', '.', '.', '.', '.', '.', '.'},
										{'.', '.', '.', '.', '.', '.', '.', '.', '.'},
										{'.', '.', '.', '.', '.', '.', '.', '.', '.'},
										{'.', '.', '.', '.', '.', '.', '.', '.', '.'},
																					};
																					*/

//Screen dimensions.
int screenWidth = 100; // 140 default
int screenHeight = 100; //40 default

int boxWidth = 200;
int boxHeight = 200;

int main() {//Runtime
	
	//All this is the consoleBuffer object.
	wchar_t *screen = new wchar_t[screenWidth * screenHeight];//Windows screen buffer only accepts this data type.
															  //Uses unicode cuz wchar.

	HANDLE consoleBuffer = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
	SetConsoleActiveScreenBuffer(consoleBuffer);
	//Sets the active buffer.
	DWORD bytesWritten = 0;

	while (true) {
		//Ascii render
		//Redraws screen at 0,0
		//WriteConsoleOutputCharacter(consoleBuffer, screen, screenWidth*screenHeight, { 0,0 }, &bytesWritten);
		
		//Graphics Mode
		//Test Render:
		renderer.drawQuad(0, 0, 100, 100, RGB(100,0,0));
		renderer.drawQuad(100, 100, 100, 100, RGB(0, 100, 0));
	}

	return 0;
}