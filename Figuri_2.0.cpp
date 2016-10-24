// ConsoleApplication13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
int z, a, b, c, d, h, r, resultS, resultP;
cin >> z;

	switch (z)
{
		case 1 : cout << "Vuvedete stranite na tozi triugulnik: ";
				 cin >> a >> b >> c ;
				 cout << endl << "Vuvedete visochinata kum stranata a na tozi triugulnik: ";
				 cin >> h;
				 resultS = a * h / 2;
				 resultP = a + b + c;
				 cout << endl << "liceto na tozi triugulnik e: " << resultS;
				 cout << endl << "perimeturut na tozi triugulnik e: " << resultP;
			break;

		case 2 : cout << "Vuvedete stranite na tozi kvadrat: ";
				 cin >> a ;
				 
				 resultS = a * a;
				 resultP = 4*a;
				 cout << endl << "liceto na tozi kvadrat e: " << resultS;
				 cout << endl << "perimeturut na tozi kvadrat e: " << resultP;
			break;

		case 3 : cout << "Vuvedete radiusut na tazi okrujnost: ";
				 cin >> r ;
				 
				 resultS = r * 22 / 7;
				 resultP = 22 / 7 * 2 * r;
				 cout << endl << "liceto na tazi okrujnost e: " << resultS;
				 cout << endl << "perimeturut na tazi okrujnost e: " << resultP;
			break;

		case 4 : cout << "Vuvedete stranite na tozi pravougilnik: ";
				 cin >> a >> b ;
				 resultS = a * b;
				 resultP = a * b;
				 cout << endl << "liceto na tozi pravougilnik e: " << resultS;
				 cout << endl << "perimeturut na tozi pravougilnik e: " << resultP;
			break;

			case 5 : cout << "Vuvedete stranite na tozi trapec: ";
				 cin >> a >> b >> c >> d  ;
				 cout << endl << "Vuvedete visochinata na tozi trapec: ";
				 cin >> h;
				 resultS = (a + b) * h / 2;
				 resultP = a + b + c + d;
				 cout << endl << "liceto na tozi trapec e: " << resultS;
				 cout << endl << "perimeturut na tozi trapec e: " << resultP;
			break;
}
return 0;
}

