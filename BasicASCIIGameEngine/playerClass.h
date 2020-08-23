//This is the playerClass.
#include "stdafx.h"
#pragma once
#include <iostream>
#include<conio.h>
using namespace std;

class player {
private:
	int playerX;
	int playerY;
	wchar_t playerRepresentation;
	int playerDirection;
	int playerSpeed;
	// 1 is up, 2 is right, 3 is down, and 4 is left

public:
	void move(int x, int y) { playerX += x; playerY += y; }

	//Setters
	void setRepresentation(wchar_t character) { playerRepresentation = character; }

	void setX(int x) { playerX = x; }

	void setY(int y) { playerY = y; }

	void setSpeed(int speed) { playerSpeed = speed; }

	void setDirection(int direction) {
		playerDirection = direction;
		if (playerDirection > 4) { playerDirection = 4; }
	}

	//Getters
	wchar_t getRepresentation() { return playerRepresentation; }

	int getX() { return playerX; }

	int getY() { return playerY; }

	int getSpeed() { return playerSpeed; }

	int getDirection() { return playerDirection; }

	void updateMovement(char forward, char backward, char right, char left, int boundaryX, int boundaryY) {
		char keypress = _getch();
		if (keypress == forward) {//From a top-down perspective.
			playerY -= playerSpeed;
			playerDirection = 1;
		}

		if (keypress == backward) {
			playerY += playerSpeed;
			playerDirection = 3;
		}

		if (keypress == right) {
			playerX += playerSpeed;
			playerDirection = 2;
		}

		if (keypress == left) {
			playerX -= playerSpeed;
			playerDirection = 4;
		}

		//Ensures the player doesn't do out of bounds.
		if (playerX > boundaryX) {
			playerX = boundaryX;
		}

		if (playerY > boundaryY) {
			playerY = boundaryY;
		}
	}

	player(int, int, int, int, wchar_t);//Player constructor.
};