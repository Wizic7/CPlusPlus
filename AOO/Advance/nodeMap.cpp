#include "nodeMap.h"
#include <map>;
#include <string>;
#include <iostream>;
#include <fstream>;
using namespace std;

void nodeMap::BuildNodeMap()
{ 
	ifstream myFile(txtFile);

	// Use a while loop together with the getline() function to read the file line by line

	//while (getline(myFile, line)) {
	//	cout << line << '\n';
	//}

	myFile.close();
}