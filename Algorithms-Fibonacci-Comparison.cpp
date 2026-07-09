#include<iostream>


using namespace std;

//Soliving Fibbonachi using 2 Methods 


void PrintFibbonacciWithForLoop(short Number)
{
	int FebNum = 0, Prev1 = 1, Prev2 = 0;cout << "1 ";
	for (short i = 2; i <= Number; i++)
	{
		FebNum = Prev1 + Prev2;
		cout << FebNum << " ";
		Prev2 = Prev1;
		Prev1 = FebNum;
	}
}

int Fibonacci(short Number)
{
	if (Number < 2) return Number;
	return Fibonacci(Number - 1) + Fibonacci(Number - 2);
}

void PrintFibonacciUpTo(short Number)
{
	for (short i = 1; i <= Number; i++)
	{
		cout << Fibonacci(i) << " ";
	}
}


int main()
{
	PrintFibbonacciWithForLoop(10);
	cout << endl;
	PrintFibonacciUpTo(10);
	return 0;
}
