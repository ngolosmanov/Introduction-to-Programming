// homeworkTas5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int x;
	cout << "Set a value to x: " ;
	cin >> x;
	

	switch (x)
	{
		case 1 : cout << x * 10 << endl;
							break;
		case 2 : cout << x * 10 << endl;
							break;
		case 3 : cout << x * 10 << endl;
							break;
		case 4 : cout << x * 100 << endl;
							break;
		case 5 : cout << x * 100 << endl;
							break;
		case 6 : cout << x * 100 << endl;
							break;
		case 7 : cout << x * 1000 << endl;
							break;
		case 8 : cout << x * 1000 << endl;
							break;
		case 9 : cout << x * 1000 << endl;
							break;
		
		default : cout << "Invalid input!" << endl;
							break;
	}
	

	return 0;
}

