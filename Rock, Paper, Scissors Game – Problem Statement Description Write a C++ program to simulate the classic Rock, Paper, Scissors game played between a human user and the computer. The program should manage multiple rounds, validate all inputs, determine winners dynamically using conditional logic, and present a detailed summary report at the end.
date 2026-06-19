#include<iostream>


using namespace std;

enum enGameChoice { Stone = 1, Paper = 2, Scissors = 3 };

enum EnWinner { Player1 = 1, Computer = 2, Draw = 3 };

struct StGameResult {
	short PlayerWinsCount = 0;
	short ComputerWinsCount = 0;
	short DrawCount = 0;
	EnWinner GameWinner = EnWinner::Draw ;

};


enGameChoice GetComputerChoice(int From, int To)
{
	int RandomNumber =  rand() % (To - From + 1) + From;
	return (enGameChoice)RandomNumber;
}



enGameChoice GetPlayerChoice()
{
	int ChoiceNumber = 0;
	do
	{
		cout << " Plaes Enter your Choice \n [1] - Stone \n [2] - Paper \n [3] - Scissors \n ";
		cin >> ChoiceNumber;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(10000,'\n');
			cout << " Invalid Choice, please enter a number between 1 and 3 : ";
			ChoiceNumber = 0;
			continue;
		}
	} while (ChoiceNumber<1||ChoiceNumber>3);
	return (enGameChoice)ChoiceNumber;
}



EnWinner WhoWonTheRound(enGameChoice PlayerChoice, enGameChoice ComputerChoice)
{
	if (PlayerChoice == ComputerChoice)
	{
		return EnWinner::Draw;
	}if (PlayerChoice == enGameChoice::Paper && ComputerChoice == enGameChoice::Scissors)
	{
		return EnWinner::Computer;
	}
	else if(PlayerChoice == enGameChoice::Stone  && ComputerChoice == enGameChoice::Paper)
	{
		return EnWinner::Computer;
	}
	else if (PlayerChoice == enGameChoice::Scissors && ComputerChoice == enGameChoice::Stone)
	{
		return EnWinner::Computer;
	}
	else
	{
		return EnWinner::Player1;
	}

}



short HowManyRoynd()
{
	short HowManyRound = 0;
	do
	{
		cout << " How Many Round Do You Want To Play choose From One To Ten (1 ----> 10) : " << endl;
		cin >> HowManyRound;

		if (cin.fail())
		{
			cin.clear();
			cin.ignore(10000, '\n');
			cout << "\nInvalid Input! Please enter a valid number.\n";
			HowManyRound = 0;
			continue;
		}
		if(HowManyRound < 1 || HowManyRound > 10)
		{
			cout << "\nInvalid Choice! Out of range (1-10).\n";
		}


	} while (HowManyRound<1||HowManyRound>10);
	return HowManyRound;
}

void PlayGame()
{
	short Round = HowManyRoynd();
	StGameResult GameResult;
	for (short i = 1; i <= Round; i++)
	{
		cout << " Round [ " << i << " ] begin : \n";
		enGameChoice PlayerChoice = GetPlayerChoice();
		enGameChoice ComputerChoice = GetComputerChoice(1, 3);
		EnWinner RoundWinner = WhoWonTheRound(PlayerChoice, ComputerChoice);
		if (RoundWinner==EnWinner::Player1)
		{
			cout << " the winner is Player 1 : \n";
			GameResult.PlayerWinsCount++;
		}
		else if (RoundWinner == EnWinner::Computer)
		{
			cout << " The Winner Is Computer  : \n";
			GameResult.ComputerWinsCount++;
		}
		else
		{
			cout << " Round Winner [ Draw ] : \n";
			GameResult.DrawCount++;
		}
	}

	cout << " The Computer is Win " << GameResult.ComputerWinsCount << endl;
	cout << " The Player1 is win " << GameResult.PlayerWinsCount << endl;
	cout << " The Player Are Draw " << GameResult.DrawCount << endl;
}



int main()
{
	srand((unsigned)time(NULL));


	PlayGame();

	return 0;
}
