//============================================================================
// Name        : WorkchartGenerator.cpp
// Author      : Ike Osenberg
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char **argv) {

	fstream read_file;
	if(argc == 0) read_file.open("availability.csv", ios::out);
	else read_file.open(argv[0], ios::out);
	if (!read_file) {
		cout << "File cannot be found.";
		return 1;
	}

	fstream write_file;
	write_file.open("workchart.csv", ios::out);
	if (!write_file) {
		cout << "Error creating file.";
		return 2;
	}

	cout << "!!!Hello World!!!" << endl;
	read_file.close();
	write_file.close();
	return 0;
}
