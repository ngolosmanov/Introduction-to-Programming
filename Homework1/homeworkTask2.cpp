// homeworkTask2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "Set the value of a: ";
		cin >> a;
	cout << "Set the value of b: ";
		cin >> b;
	cout << "Set the value of c: ";
		cin >> c;

	if ( (a > 0 && b >> 0 && c >> 0) || (a < 0 && b < 0 && c > 0) 
		|| (b < 0 && c < 0 && a > 0) || (a < 0 && c < 0 && b > 0) )

	{		
			cout << "The product of the three integers is positive." << endl;
	}

	else if ( (a < 0 && b > 0 && c > 0) || ( c < 0 && b < 0 && a < 0) 
			|| ( a < 0 && c < 0 && b > 0) || ( a < 0 && b < 0 && c < 0) )
	{
			cout << "The product of the three integers is negative" << endl;
	}

	else
	{
			cout << "The product of the three integers is 0" << endl;
	}
	return 0;
}

