// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;



void initArray(int arr[], int size)
{
  for(int i = 0; i < size; i++)
  {
    cout << "arr[" << i << "] = ";
    cin >> arr[i];
  }
}


{
  for(int i = 0; i < size; i++)
  {
    cout << arr[i] << "   " ;
  }
}

void searchingForNummer(int arr[], int size, int nummer)
{
	bool flag = false;

	for( int i = 0; i < size; i++)
	{
		if (arr[i] == nummer)
		{
			flag = true;
			cout << flag << endl;
			break;
		}
	}
	
	if(flag == false)
	{
		cout << flag << endl;
	}
}



int main()
{
	int const SIZE = 100;
	  int arr[SIZE];
  int numOfElements, nummer;
  cout << "\nHow many number of elements do you want: ";
  cin >> numOfElements;

  cout << "Entering the array elements:" << endl;
  initArray(arr, numOfElements)
  cout << "\nPrinting the array elements:" << endl;
  printArray(arr, numOfElements);
  cout << endl;

  cout << "Which number we are searching for?";
  cin >> nummer;
  searchingForNummer(arr, numOfElements, nummer);
  cout << endl;

  

	return 0;
}

