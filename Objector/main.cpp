#include "objector.h"
#include <iostream>

int main()
{
	Objector objFile;

	objFile.ImportObjFile("chalet.obj");

	std::cout << "done!";
}