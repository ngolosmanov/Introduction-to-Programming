// homeworkTask4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Set value of a: " ;
		cin >> a;
	cout << "Set value of b: ";
		cin >> b;

	int thirdVariable;
	(( a > b ) ? (thirdVariable = a) : (thirdVariable = b));
	((thirdVariable > 0) ? (thirdVariable *= 1) : (thirdVariable *= -1));
	cout << "The third variable is: " << thirdVariable << endl;
	return 0;
}

