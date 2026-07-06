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
			Arr[i][j] = RandomNumber(1, 10);
		}
	}
}

void PrintArray(int Arr[3][3], short Rows, short Columns)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			printf(" %02d ",Arr[i][j]);
		}
		cout << endl;
	}
}


int SumOfMatrix(int Arr[3][3], short Rows, short Columns)
{
	int Sum = 0;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			Sum += Arr[i][j];
		}
	}
	return Sum;
}


bool AreTheSumOfMatricesIsAqual(int Arr[3][3], int Arr2[3][3], short Rows, short Columns)
{
	return (SumOfMatrix(Arr, Rows, Columns) != SumOfMatrix(Arr2, Rows, Columns));
}

int main()
{
	srand((unsigned)time(NULL));

	int Arr1[3][3];
	FillArrayWithRandomNumber(Arr1, 3, 3);
	PrintArray(Arr1, 3, 3);
	int  Arr2[3][3];
	FillArrayWithRandomNumber(Arr2, 3, 3);
	PrintArray(Arr2, 3, 3);
	SumOfMatrix(Arr1, 3, 3);
	SumOfMatrix(Arr2, 3, 3);
	if (SumOfMatrix(Arr1, 3, 3) == SumOfMatrix(Arr2, 3, 3))
		cout << "  Equal ";
	else
		cout << " Not Equal";
	cout << "\n-----------------------------------------\n";
	if (AreTheSumOfMatricesIsAqual(Arr1, Arr2, 3, 3))
		cout << " Not Equal ";
	else
		cout << " Equal";
	return 0;
}
