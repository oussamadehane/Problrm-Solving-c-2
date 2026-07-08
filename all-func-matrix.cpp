#include<iostream>
#include<ctime>

using namespace std;


int RandomNumber(int From, int To)
{
	return rand() % (To - From + 1) + From;
}


void FillMatrixWithRandomNumber(int Arr[3][3], short Rows, short Columns)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			Arr[i][j] = RandomNumber(0, 1);
		}
	}
}


void PrintMatrix(int Arr[3][3], short Rows, short Columns)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			printf(" %02d ", Arr[i][j]);
		}
		cout << endl;
	}
}

int SumAllIndexOfMatrix(int Arr[3][3], short Rows, short Columns)
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

bool IsMatriciesTypical(int Arr[3][3], int Mat[3][3], short Rows, short Columns)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			if (Arr[i][j] != Mat[i][j])return false;
		}
	}
	return true;
}

bool IsIndentityMatrix(int Arr[3][3], short Rows, short Columns)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			if (i == j && Arr[i][j] != 1)
				return false;
			else if (i != j && Arr[i][j] != 0)
				return false;
		}
	}
	return true;
}


bool IsScalryMatrix(int Arr[3][3], short Rows, short Columns)
{
	short FirstIndex =Arr [0][0];
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			if (i == j && Arr[i][j] != FirstIndex)
				return false;
			else if (i != j && Arr[i][j] != 0)
				return false;
		}
	}
	return true;
}
int main()
{
	srand((unsigned)time(NULL));
	int Arr[3][3];

	FillMatrixWithRandomNumber(Arr, 3, 3);
	PrintMatrix(Arr, 3, 3);
	cout << " Sum of All Index Is : " << SumAllIndexOfMatrix(Arr, 3, 3)<<"\n";
	int Matrix2[3][3];
	FillMatrixWithRandomNumber(Matrix2, 3, 3);
	PrintMatrix(Matrix2, 3, 3);
	cout << " Sum of All Index In matrix 2 Is : " << SumAllIndexOfMatrix(Matrix2, 3, 3)<<"\n";

	if (SumAllIndexOfMatrix(Arr, 3, 3) != SumAllIndexOfMatrix(Matrix2, 3, 3))
		cout << " Matricies They Not Equal  ";
	else
		cout << " Matricies They Are Equal ";
	cout << endl;
	if (IsMatriciesTypical(Arr, Matrix2, 3, 3))
		cout << " Matricies are Typical ";
	else cout << " They are Not Typical ";

	cout << endl;
	if (IsIndentityMatrix(Arr, 3, 3))
		cout << " Yes Is Identity ";
	else
		cout << " No  it's Not Identity ";



	return 0;
}
