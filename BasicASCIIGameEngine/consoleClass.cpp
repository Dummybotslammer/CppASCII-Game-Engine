//This is the constructor for consoleClass.
#include "stdafx.h"
#include "consoleClass.h"
#include <iostream>
#include <Windows.h>
using namespace std;

void consoleBuffer::createConsoleScreenBuffer(int width, int height) {
	screenWidth = width;
	screenHeight = height;
}

void consoleBuffer::createConsoleScreenBuffer() {
	screenWidth = 120;
	screenHeight = 40;
}