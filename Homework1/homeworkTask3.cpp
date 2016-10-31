// homeworkTask3.cpp : Defines the entry point for the console application.
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
	 int sum = a + b;

	(( sum % 2 == 0) ? (sum *= 2) : (sum /= 2));
	cout << sum << endl;
	return 0;
}

