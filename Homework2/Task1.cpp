// Task1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void myFunctionSwap (int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp


	cout << "The value of x: " << x << endl << "The value of y: " << y << endl;

}

int main()
{
	int x, y;

	cout << "The function should swap the values of x and y." << endl << endl;

	cout << "Give value to x: ";
	cin >> x;

	cout << "Give value of y: ";
	cin >> y;

	cout << endl << endl << "The function gives you the following result. " << endl;

	myFunctionSwap (x, y);


	return 0;
}

