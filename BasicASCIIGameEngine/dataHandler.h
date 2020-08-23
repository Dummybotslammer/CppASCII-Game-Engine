#pragma once

#include "stdafx.h"
#include <iostream>
#include <fstream>//Allows us to stream txt file data.
using namespace std;

class dataHandle {
private:
	string levelSourceFilename;
	ifstream levelSourceFile;
	char levelData;//We will declare a array in this later.

public://This needs alot of work.
	void setLevelSourceFilename(string name) {
		levelSourceFile.open(name);
		levelSourceFilename = name;
	}

	void openFile();//Do this tomorrow as well

	void loadLevelData() {
		if (levelSourceFile.is_open()) {
			//Do this code tomorrow.
		}
	}

	~dataHandle();//Deconstructor
	dataHandle(string);//Constructor
};
