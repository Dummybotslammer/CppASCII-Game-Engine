//This is the constructor for the playerClass.
#include "stdafx.h"
#include <iostream>
#include "playerClass.h"
#include <conio.h>
using namespace std;

player::player(int x, int y, int direction, int speed, wchar_t representation) {
	setX(x);
	setY(y);
	setDirection(direction);
	setSpeed(speed);
	setRepresentation(representation);
}