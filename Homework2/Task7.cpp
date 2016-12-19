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

void printArray(int arr[], int size)
{
  for(int i = 0; i < size; i++)
  {
    cout << arr[i] << "   " ;
  }
}

void searchingForNummer(int arr[], int size, int nummer)
{
	bool flag = false;
	int counter = 0;

	for( int i = 0; i < size; i++)
	{
		if (arr[i] == nummer)
		{
			for (int j = i; j < size; j++)
			{
				int temp = 0;	

				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}

			flag = true;
			counter++;
		}
	}

	if(flag == false)
	{
		cout << flag << endl;
	}
	else 
	{
		cout << flag << endl;

		for(int i = 0; i <= size - counter; i++)
        {
		  cout << arr[i] << "   " ;
	    }
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
  initArray(arr, numOfElements);

  cout << "\nPrinting the array elements:" << endl;
  printArray(arr, numOfElements);

  cout << "\nWhich number we are searching for?  ";
  cin >> nummer;
  searchingForNummer(arr, numOfElements, nummer);
  cout << endl;

  return 0;
}

