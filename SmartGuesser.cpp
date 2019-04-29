#include "SmartGuesser.hpp"
#include <stdlib.h>
using namespace std;

string lastGuess = "";
string nextGuess = "";
int amnt;
vector<string> vec;
string SmartGuesser::guess()
{

	if (nextGuess.compare("") == 0)
	{
		lastGuess = "1234";
		return "1234";
	}
	else
	{
		lastGuess = nextGuess;
		return nextGuess;
	}
}
void SmartGuesser::learn(string s)
{
}

void optionArr(string curr,int size)
{
	if(size==1){
		for(int i=0;i<10;i++){
			vec.push_back(curr+to_string(i));
			cout << "Added: " << curr << to_string(i)+" ";
		}
		return;
	}
	else{
		for(int i=0;i<10;i++){
			optionArr(curr+to_string(i),size-1);
		}
	}


}
void SmartGuesser::startNewGame(uint ut)
{
	cout << "NEW GAME";
	length = ut;
	amnt = pow(9, length);
	optionArr("",length);
}
