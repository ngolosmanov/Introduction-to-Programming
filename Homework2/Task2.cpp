// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;



void initArray(int arr[], int size)
{
  for(int i = 0; i < size; i++)
  {
	int x = i + 1;
	arr[i] = x;
  }
}


void printArray(int arr[], int size)
{
  for(int i = 0; i < size; i++)
  {
    cout << arr[i] << "   " ;
  }
}

void reverseArray(int arr[], int size)
{
	for(int i = size - 1; i >= 0; i--)
	{
		cout << arr[i] << "   ";
	}
}

int main()
{
  int const SIZE = 100;
  int arr[SIZE];
  int numOfElements;

  cout << "\nHow many number of elements do you want: ";
  cin >> numOfElements;

  initArray(arr, numOfElements);

  cout << "\nPrinting the array:" << endl;
  printArray(arr, numOfElements);
  cout << endl;

  cout << "\nPrinting the reversed array:" << endl;
  reverseArray(arr, numOfElements);
  cout << endl;

	return 0;
}

