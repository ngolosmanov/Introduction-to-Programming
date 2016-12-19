// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


void initArray(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << "array[" << i << "] = ";
		cin >> arr[i];
	}
}
void combineArrays(int *arr1, int *arr2, int n1, int n2, int *arr3)
{
	int i = 0, j = 0, k = 0;
	int counter = 0;

	while (i < n1 && j < n2)
	{
		if (arr1[i] <= arr2[j])
		{
			arr3[k] = arr1[i];
			i++;
			
		}
		else
		{
			arr3[k] = arr2[j];
			j++;
		}
		k++;
	}

	if (!(i < n1)) 
	{
		for (j; j < n2; j++)	
		{
			arr3[k] = arr2[j];
			k++;
		}
	}
	
	if (!(j < n2))
	{
		for (i; i < n1; i++)
		{
			arr3[k] = arr1[i];
			k++;
		}
	}
	
	for (int z = 0; z < n1 + n2; z++)
		{
			cout << arr3[z] << " ";
		}
	
	for (int z = 0; z < n1 + n2; z++)
	{
		if (arr3[z] == arr3[z+1])
		{
			for (int x = z; x < n1 + n2; x++)
			{
				int temp = 0;	

				temp = arr3[x];
				arr3[x] = arr3[x+1];
				arr3[x+1] = temp;
			}

			counter++;
		}
	}

	cout << endl << "Printing the array ohne Wiederholungen:" << endl;
	
	for (int z = 0; z < n1 + n2 - counter; z++)
        {
		  cout << arr3[z] << "   " ;
	    }

	cout << endl;
	
}
	int main()
	{
		int arr1[100];
		int arr2[100];
		int arr3[100];
		int n1, n2;

		cout << "Number of elements for array #1: ";
		cin >> n1;
		cout << "Number of elements for array #2: ";
		cin >> n2;

		cout << "Initializing array #1: " << endl;
		initArray(arr1, n1);

		cout << "Initializing array #2: " << endl;
		initArray(arr2, n2);

		cout << "Printing the combined array: " << endl;
		combineArrays(arr1, arr2, n1, n2, arr3);
		
		return 0;
	}