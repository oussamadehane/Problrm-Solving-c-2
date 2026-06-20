
//problem statment 
//Problem #1: 3x3 Random Matrix
//Description
//Write a C++ program to populate a 3x3 matrix(2 - Dimensional Array) with pseudo - random numbers ranging from 1 to 100, and then display the matrix elements on the screen in a well - formatted grid layout.

#include<iostream>
#include<cstdlib>
#include<ctime>




using namespace std;

int Random_Number(int From, int To)
{
	return rand() % (To - From + 1) + From;
}


void Fill_2D_Array_With_Random_Number(int Arr[3][3],short Rows,short Columns)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			Arr[i][j] = Random_Number(1, 100);
		}
	}
}



void Print_2D_Array(int Arr[3][3], short Rows, short Columns)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			cout << Arr[i][j] << "\t";
		}
		cout << endl;
	}
}


int main()
{
	srand((unsigned)time(NULL));
	int Arr[3][3];
	Fill_2D_Array_With_Random_Number(Arr, 3, 3);
	Print_2D_Array(Arr,3, 3);
	return 0;
}
