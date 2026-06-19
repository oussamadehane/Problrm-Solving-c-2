#include<iostream>
#include<string>

using namespace std;



bool Is_Number(char Number)
{
	return (Number >= '0' && Number <= '9');
}


bool Is_Space(char Space)
{
	return (Space == ' ' || Space == '\n' || Space == '\t');
}




bool Read_Strong_Password(string Password)
{
	if (Password.length()<8)
	{
		return false;
	}
	bool HasNumber = false;
	for (int i = 0; i < Password.length(); i++)
	{
		if (Is_Number(Password[i]))
		{
			return true;
		}
		if (Is_Space(Password[i]))
		{
			return false;
		}
	}
	return HasNumber;
}



int main()
{
	cout << "Hello2026a  : " << (Read_Strong_Password("Hello2026a") ? "Strong" : "Weak") << endl;
	cout << "Short1         : " << (Read_Strong_Password("Short1") ? "Strong" : "Weak") << endl;
	cout << "No Digits Here : " << (Read_Strong_Password("No Digits Here") ? "Strong" : "Weak") << endl;
	cout << "Space123456    : " << (Read_Strong_Password("Space 123456") ? "Strong" : "Weak") << endl;
	return 0;
}
