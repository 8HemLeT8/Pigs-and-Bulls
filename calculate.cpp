#include "calculate.hpp"

using namespace std;

string calculateBullAndPgia(string choice, string guess)
{
    int bulCounter = 0;
    int pgiaCounter = 0;
    string nChoice = "";
    string nGuess = "";
    for (int i = 0; i < choice.length(); i++)
    {
        if (choice[i] == guess[i])
        {
            bulCounter++;
        }
        else
        {
            nChoice+=choice[i];
            nGuess += guess[i];
        }
    }
    for (int i = 0; i < nGuess.length(); i++)
    {
        int location = nChoice.find(nGuess[i]);
        if (location != -1)
        {
            pgiaCounter++;
            nChoice.erase(nChoice.begin()+location);
        }
    }
    return to_string(bulCounter) + "," + to_string(pgiaCounter);
}