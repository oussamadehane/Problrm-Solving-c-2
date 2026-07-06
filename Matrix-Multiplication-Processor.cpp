#include<iostream>
#include<ctime>


using namespace std;


int RandomNumber(int From, int To)
{
	return rand() % (To - From + 1) + From;
}


void FillArrayWithRandomNumber(int Arr[3][3], short Rows, short Columns)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0;  j < Columns;  j++)
		{
			Arr[i][j] = RandomNumber(1, 20);
		}
	}
}

void PrintArray(int Arr[3][3], short Rows, short Columns)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			cout << Arr[i][j] << " \t";
		}
		cout << endl;
	}
}



void MultiplayArray(int Arr[3][3], int Arr2[3][3], int ArrRes[3][3], short Rows, short Columns)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			 ArrRes[i][j] = Arr[i][j] * Arr2[i][j];
		}
	}
}


int main()
{
	srand((unsigned)time(NULL));

	int Arr1[3][3];
	FillArrayWithRandomNumber(Arr1, 3, 3);
	PrintArray(Arr1, 3, 3);
	cout << endl; 

	int Arr2[3][3];
	FillArrayWithRandomNumber(Arr2, 3, 3);
	PrintArray(Arr2, 3, 3);

	cout << endl;
	int ArrMu[3][3];
	MultiplayArray(Arr1, Arr2, ArrMu, 3, 3);
	PrintArray(ArrMu, 3, 3);
	return 0;
}
