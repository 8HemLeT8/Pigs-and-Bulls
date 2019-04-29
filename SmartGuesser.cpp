#include "SmartGuesser.hpp"
#include <stdlib.h>
using namespace std;

string lastGuess="";
string nextGuess="";

string SmartGuesser::guess() {
	
	if(nextGuess.compare("")==0){
		lastGuess="1234";
		return "1234";
	}
	else {
		lastGuess=nextGuess;
		return nextGuess;
	}
}
void SmartGuesser::learn(string s){



}
void SmartGuesser::startNewGame(uint ut) {
	length=ut;
}


