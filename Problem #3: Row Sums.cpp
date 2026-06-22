#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>


using namespace std;

int RandomNumber(int From, int To)
{
	return rand() % (To - From + 1) + From;
}

void FillArrayWithRandomNumber(int Arr[3][3], short Rows, short Columns)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			Arr[i][j] = RandomNumber(1, 100);
		}
	}
}

void PrintArray(int Arr[3][3], short Rows, short Columns)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			cout << setw(3) << Arr[i][j] << " \t";
		}cout << endl;
	}
}

int SumEachRows(int Arr[3][3], short Rows, short Columns)
{
	int Sum = 0;
	for (short i = 0; i < Columns; i++)
	{
		Sum += Arr[Rows][i];
	}
	return Sum;

}


void PrintEachSumRows(int Arr[3][3], short Rows, short Columns)
{
	for (short i = 0; i < Rows; i++)
	{
		cout << " The Sum of Rows " << i + 1 << " : " << SumEachRows(Arr, i, Columns) << endl;
	}
}


void Look_Row_Sums_In_1D_Array(int Arr[3][3], int ArrSum[3], short Rows, short Columns)
{
	for (short i = 0; i < Rows; i++)
	{
		ArrSum[i] = SumEachRows(Arr, i, Columns);
	}
}


void Print1dArr(int Arr[3], short Length)
{
	for (short i = 0; i < Length; i++)
	{
		cout << Arr[i] << endl;
	}
}

int main()
{
	int arr[3][3];
	FillArrayWithRandomNumber(arr, 3, 3);
	PrintArray(arr, 3, 3);

	PrintEachSumRows(arr, 3, 3);

	int Arr[3];
	Look_Row_Sums_In_1D_Array(arr,Arr, 3 ,3);
	Print1dArr(Arr,3);
	return 0;
}
