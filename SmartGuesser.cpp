#include "SmartGuesser.hpp"
#include <stdlib.h>
using namespace std;

string lastGuess = "";
string nextGuess = "";
vector<string> vec;
string SmartGuesser::guess()
{

	if (nextGuess.compare("") == 0)
	{
		lastGuess = "1122";
		return "1122";
	}
	else
	{
		lastGuess = nextGuess;
		return nextGuess;
	}
}
void SmartGuesser::learn(string s)
{
	int bul = s[0] - '0';
	int pgia = s[2] - '0';
	vector<string> newVec;

	for (int i = 0; i < vec.size(); i++)
	{
		string res = calculateBullAndPgia(lastGuess, vec.at(i));
		if (res.compare(s) == 0)
		{
			newVec.push_back(vec.at(i));
		}
	}
	vec = newVec;
	nextGuess = newVec.at(0);
}

void optionArr(string curr, int size)
{
	if (size == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			vec.push_back(curr + to_string(i));
		}
		return;
	}
	else
	{
		for (int i = 0; i < 10; i++)
		{
			optionArr(curr + to_string(i), size - 1);
		}
	}
}
void SmartGuesser::startNewGame(uint ut)
{
	length = ut;
<<<<<<< HEAD
	//if (length < 7)
	//{
		optionArr("", length);
//	}
=======
	if (length < 7)
	{
		optionArr("", length);
	}
>>>>>>> cb198433cec16c8f2c51e63fef56f3be6d823d4f
}
