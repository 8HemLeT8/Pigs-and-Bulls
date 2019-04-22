#include "SmartGuesser.hpp"
#include <stdlib.h>
using namespace std;


string SmartGuesser::guess() {
	string r="";
	for (uint i=0; i<this->length; ++i) {
		char c = '0' + (rand()%10);
		r += c;
	}
	return r;
}
void SmartGuesser::learn(string s){

}
<<<<<<< HEAD
void SmartGuesser::startNewGame(uint len) {
=======
void SmartGuesser::startNewGame(uint ut) {
>>>>>>> 068127d13b94e1a8421b1c3851d9aea871cd7e6e

}


