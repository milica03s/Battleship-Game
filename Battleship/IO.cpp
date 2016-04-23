#include "IO.h"
#include<iostream>

using namespace std;

void getCurrentState(char res[][10])
{
	char row[10];
	for (int i = 0; i < 10; i++)
	{
		char row[10];
		cin >> row[i];

		strcpy(res[i], row);
	}

}

void nextMove(int r, int c) {
	cout << r << " " << c;
}

void setStartPositions(char res[][10] )
{

}

void setHardcodedStartPositions()
{
	cout << "0 0" << endl;
	cout << "4 2" << endl;
	cout << "6 4:7 4" << endl;
	cout << "3 7:3 8" << endl;
	cout << "7 7:7 9" << endl;
	cout << "1 4:4 4" << endl;
	cout << "4 0:8 0" << endl;

}
