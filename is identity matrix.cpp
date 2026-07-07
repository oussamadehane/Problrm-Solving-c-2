#include<iostream>


using namespace std;

void PrintMatrix(int Matrix[3][3], short Rows, short Columns)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			cout << Matrix[i][j] << "\t";
		}
		cout << endl;
	}
}

bool IsIdentityMatrix(int Matrix[3][3], short Rows, short Columns)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			if (i == j && Matrix[i][j] != 1)
			{
				return false;
			}
			else if (i != j && Matrix[i][j] !=0)
				return false;
		}
	}
	return true;
}

int main()
{
	int matrix[3][3] = { {1,0,0},{0,1,0},{0,0,1} };
	int matrix2[3][3] = { {0,1,0},{1,0,0},{0,0,1} };

	PrintMatrix(matrix2, 3, 3);
	if (IsIdentityMatrix(matrix2, 3, 3))
		cout << " Is Identity Matrix ";
	else
		cout << " Not Identity Matrix ";

	return 0;
}
