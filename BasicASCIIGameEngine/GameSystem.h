#include "stdafx.h"
#pragma once

#include<iostream>
#include<Windows.h>
#include"dataHandler.h"
using namespace std;

class GameSystem : public dataHandle {
private:
	bool gameLoop = true;
	unsigned long int mapNo = 0;

public:
	void setGameLoop(bool gameloop) {
		gameLoop = gameloop;
	}

	bool isTrue() {
		return gameLoop;
	}




};