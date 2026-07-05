#include<iostream>

using namespace std;


void FillMatrixWithOrderNumber(int Arr[3][3], short Rows, short Columns)
{
	short Counter = 0;
	for (short i = 0; i <Rows ; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			Counter++;
			Arr[i][j] = Counter;
		}
	}
}


void PrintMatrix(int Arr[3][3], short Rows, short Columns)
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
	int arr[3][3];
	FillMatrixWithOrderNumber(arr, 3, 3);
	PrintMatrix(arr, 3, 3);
	return 0;
}
