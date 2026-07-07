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




bool AreTypical(int Arr[3][3], int Arr2[3][3], short Rows, short Columns)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			if (Arr[i][j]!=Arr2[i][j])
			{
				return false;
			}
		}
	}
	return true;
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

	if (AreTypical(Arr1, Arr2, 3, 3))
		cout << "Matrices are identical (Typical).";
	else
		cout << "Matrices are different.";
	
	return 0;
}
