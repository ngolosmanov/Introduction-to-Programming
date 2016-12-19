// ConsoleApplication6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int const ROWS = 100, COLS = 100;

void initMultiArray(int arr[][COLS], int rows, int cols) 
{
  for(int i = 0; i < rows; i++)
  {
    for(int j = 0; j < cols; j++)
    {
      cout << "arr[" << i << "][" << j << "] = ";
      cin >> arr[i][j];
    }
    cout << endl;
  }
}


void printMultiArray(int arr[][COLS], int rows, int cols)
{
  for(int i = 0; i < rows; i++)
  {
    for(int j = 0; j < cols; j++)
    {
      cout << arr[i][j] << "    ";
    }
    cout << endl;
  }
}

void transArray(int arr[][COLS], int rows, int cols)
{
	for(int j = 0; j < cols; j++)
	{
		for(int i = 0; i < rows; i++)
		{
			cout << arr[i][j] << "    ";
		}
		cout << endl;
	}
}

int main()
{
	
  int Rows, Cols;
  int matrix[ROWS][COLS];
  cout << "How many rows: ";
  cin >> Rows;
  cout << "How many cols: ";
  cin >> Cols;
  cout << "Entering the multidimensional array's elements:" << endl;
  initMultiArray(matrix, Rows, Cols);

  cout << "\nPrinting the multidimensional array's elements:" << endl;
  printMultiArray(matrix, Rows, Cols);
  cout << endl;

   cout << "\nPrinting the multidimensional transponierten array's elements:" << endl;
  transArray(matrix, Rows, Cols);
  cout << endl;
	return 0;
}

