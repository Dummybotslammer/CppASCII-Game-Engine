#include"stdafx.h"
#include "dataHandler.h"

//constructor
dataHandle::dataHandle(string setlevelSourceFile) {
	setLevelSourceFilename(setlevelSourceFile);
}

//destructor
dataHandle::~dataHandle() {
	levelSourceFile.close();
}

void dataHandle::openFile() {
	//Do this code tomorrow
}