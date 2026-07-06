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
			Arr[i][j] = RandomNumber(1, 9);
		}
	}
}

void PrintArray(int Arr[3][3], short Rows, short Columns)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			printf(" 0% *d ", 2, Arr[i][j]);
		}
		cout << endl;
	}
}




void PrintSpecificRow(int Arr[3][3], short RowIndex, short Columns)
{
	for (short j = 0; j < Columns; j++)
	{
		printf(" %0*d ", 2, Arr[RowIndex][j]);
	}
}

void PrintSpecificColumns(int Arr[3][3], short Rows, short IndexColumns)
{
	for (short i = 0; i < Rows ; i++)
	{
		printf(" %0*d ", 2, Arr[i][IndexColumns]);
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int Arr1[3][3];
	FillArrayWithRandomNumber(Arr1, 3, 3);
	PrintArray(Arr1, 3, 3);
	cout << endl; 
	PrintSpecificRow(Arr1, 1, 3);
	cout << endl;
	PrintSpecificColumns(Arr1, 3, 1);
	

	return 0;
}
