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



void PrintMidleRows(int Arr[3][3], short Rows, short Columns)
{
	short MiddRows = Rows / 2;
	for (short j = 0; j < Columns; j++)
	{
		printf(" %0*d ", 2, Arr[MiddRows][j]);
	}
}
void PrintMidleColumns(int Arr[3][3], short Rows, short Columns)
{
	short MiddColumns = Columns / 2;
	for (short i = 0; i < Rows; i++) 
	{
		printf(" %0*d ", 2, Arr[i][MiddColumns]);
	}
}


int main()
{
	srand((unsigned)time(NULL));

	int Arr1[3][3];
	FillArrayWithRandomNumber(Arr1, 3, 3);
	PrintArray(Arr1, 3, 3);
	cout << endl; 

	PrintMidleRows(Arr1, 3, 3);
	cout << endl;
	PrintMidleColumns(Arr1, 3, 3);
	return 0;
}
