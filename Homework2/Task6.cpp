// Task6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void initArray(double arr[], int size)
{
  for(int i = 0; i < size; i++)
  {
    cout << "arr[" << i << "] = ";
    cin >> arr[i];
  }
}

void printArray(double arr[], int size)
{
  for(int i = 0; i < size; i++)
  {
    cout << arr[i] << "   " ;
  }
}

void function(double arr[], int size)
{
	int a = -1;
	if (arr[1] == 0)
	{
		a = 0;
	}
	for(int i = 1; i < size - 1; i++)
	{
		if( i == (arr[i-1] + arr[i+1])/2)
		{
			a = i;
		}
	}
	if (size == arr[size-1])
	{
		a = size - 1;
	}
	if (a != -1)
	{
	cout << "The searched index is: " << a << endl;
	}
	else
	{
		cout << "Such an element wasn't found: " << a << endl;
	}
}


int main()
{
	int numOfElements;
	int const SIZE = 100;
	double arr[SIZE];

	cout << "Number of elements: ";
	cin >> numOfElements;
	
	cout << "Initializing the array: " << endl;
	initArray(arr, numOfElements);

	cout << "Printing the array: " << endl;
	printArray(arr, numOfElements);

	cout << "Searching of such an element: " << endl;
	function(arr, numOfElements);

	return 0;
}

