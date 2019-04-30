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
		for (int i = 0; i < length; i++)
		{
			lastGuess += "1";
		}
		return lastGuess;
	}
	else
	{
		lastGuess = nextGuess;
		return nextGuess;
	}
}
void SmartGuesser::learn(string s)
{
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
	lastGuess = "";
	nextGuess = "";
	vec.clear();
	length = ut;
	// if (length < 6)
	// {
		optionArr("", length);
//	}
}
