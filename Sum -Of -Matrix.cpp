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

int main()
{
	srand((unsigned)time(NULL));

	int Arr1[3][3];
	FillArrayWithRandomNumber(Arr1, 3, 3);
	PrintArray(Arr1, 3, 3);
	
	cout << endl; 
	cout << SumOfMatrix(Arr1, 3, 3);

	return 0;
}
