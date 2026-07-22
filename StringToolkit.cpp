#include<iostream>
#include<string>
using namespace std;

string ReadSentence()
{
	string Sentence = "";
	cout << "Enter the Sentence ";
	getline(cin, Sentence);
	return Sentence;
}

// print first leeter fromeach word in sentence

void PrintFirstLetterFromEachWord(string Sentence)
{
	bool IsFirstLetter = true;
	for (int i = 0; i < Sentence.length(); i++)
	{
		if (Sentence[i]!=' '&&IsFirstLetter)
		{
			cout << Sentence[i] << endl;
		}
		(IsFirstLetter = Sentence[i] == ' ' ? true : false);
	}
}

// change the first letter to upper case 

string  ChangeFirstLetterToUpper(string Sentence)
{
	bool IsFirstLetter = true;
	for (int i = 0; i < Sentence.length(); i++)
	{
		if (Sentence[i] != ' ' && IsFirstLetter)
		{
			Sentence[i] = toupper(Sentence[i]);
		}
		(IsFirstLetter = Sentence[i] == ' ' ? true : false);
	}
	return Sentence;
}

//change First Letter To Lower Case 

string  ChangeFirstLetterToLower(string Sentence)
{
	bool IsFirstLetter = true;
	for (int i = 0; i < Sentence.length(); i++)
	{
		if (Sentence[i] != ' ' && IsFirstLetter)
			Sentence[i] = tolower(Sentence[i]);
		(IsFirstLetter = Sentence[i] == ' ' ? true : false);
	}
	return Sentence;
}

// change all letter to upper 

string ChangeAllLetterToUpper(string Sentence)
{
	for (int i = 0; i <Sentence.length(); i++)
	{
		Sentence[i] = toupper(Sentence[i]);
	}
	return Sentence;
}
// change all letter to Lower 

string ChangeAllLetterToLower(string Sentence)
{
	for (int i = 0; i < Sentence.length(); i++)
	{
		Sentence[i] = tolower(Sentence[i]);
	}
	return Sentence;
}

// read character from user 

char ReadChar()
{
	char C = ' ';
	cout << "Enter A char : " << endl;
	cin >> C;
		return C;
}

// inverted Char 

char InvertedCharToTwoCase(char C)
{
	if (C == tolower(C))
		return  C = toupper(C);
	else
		return tolower(C);

	//with short hand if 
	//return(isupper(C) ? tolower(C) : toupper(C));
}

// ChangeAllLetterByInvertedFunc
string ChangeAllLetterByInvertedFunc(string Sentence)
{
	for (int i = 0; i < Sentence.length(); i++)
	{
		Sentence[i] = InvertedCharToTwoCase(Sentence[i]);
	}
	return Sentence;
}

//count The Length And Capitall / small letter 

short CountUpperLetterString(string Sentence)
{
	short Counter = 0;
	for (int i = 0; i <Sentence.length(); i++)
	{
		if (isupper(Sentence[i]))
			Counter++;
	}
	return Counter;
}

short CountLowerLetterString(string Sentence)
{
	short Counter = 0;
	for (int i = 0; i < Sentence.length(); i++)
	{
		if (islower(Sentence[i]))
			Counter++;
	}
	return Counter;
}


/// count speacial char from user 

short CounterTheChar(string Sentence ,char C)
{
	short Counter = 0;
	for (int i = 0; i < Sentence.length(); i++)
	{
		if (Sentence[i] == C)
		{
			Counter++;
		} 
	}
	return Counter;
	
}

int main()
{
	string Sentence = ReadSentence();
	
	PrintFirstLetterFromEachWord(Sentence);
	cout << ChangeFirstLetterToUpper(Sentence) << endl;
	cout << ChangeFirstLetterToLower(Sentence) << endl;
	cout << ChangeAllLetterToLower(Sentence) << endl;
	cout << ChangeAllLetterToUpper(Sentence) << endl;
	char C = ReadChar();
	cout << InvertedCharToTwoCase(C);
	cout << ChangeAllLetterByInvertedFunc(Sentence);	

	cout << " the Length of String is " << Sentence.length() << endl;
	cout << " the Counter of small Letter is " << CountLowerLetterString(Sentence) << endl;
	cout << " the Counter of capitale letter is " << CountUpperLetterString(Sentence) << endl;
	
	cout << CounterTheChar(Sentence, C) << endl;



	return 0;
}
