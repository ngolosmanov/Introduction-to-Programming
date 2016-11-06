// generatingRandom4-DigitNumber.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;

	if (a > b && a > c && a > d && a > e)
	{
		cout << "The biggest number: " << a << endl;
	}

	else if (b > a && b > c && b > d && b > e)
	{
		cout << "The biggest number: " << b << endl;
	}
	
	else if (c > a && c > b && c > d && c > e)
	{
		cout << "The biggest number: " << c << endl;
	}
	
	else if (d > a && d > c && d > b && d > e)
	{
		cout << "The biggest number: " << d << endl;
	}
	
	else if (e > b && e > b && e > c && e > d)
	{
		cout << "The biggest number: " << e << endl;
	}

	else 
	{
		cout << "All numbers are the same." << endl;
	}



	return 0;
}

