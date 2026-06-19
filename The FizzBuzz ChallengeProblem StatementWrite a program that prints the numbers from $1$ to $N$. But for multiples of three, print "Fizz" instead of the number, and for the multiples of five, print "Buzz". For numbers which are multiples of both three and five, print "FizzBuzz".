#include<iostream>

using namespace std;




int Read_Number()
{
	int Number = 0;
	cout << " enter your Number ";
	cin >> Number;
	return Number;
}


void PrintAllNumber(int Number)
{
	for (int i = 1; i <=Number ; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			cout << "Fizz Buzz" << endl;
		}
		else if (i % 3 == 0)
			cout << " Fuzz" << endl;
		else if (i % 5 == 0)
			cout << " Buzz" << endl;
		else
		{
			cout << " - " << i << endl;
		}
	}
}
int main()
{
	PrintAllNumber(Read_Number());
	return 0;
}
