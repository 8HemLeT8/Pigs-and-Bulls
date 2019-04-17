#pragma once
#include <string>
using namespace std;

namespace bullpgia
{

class Guesser
{
public:
    virtual void startNewGame(uint);
    virtual string guess() = 0;
    virtual void learn(string);
    unsigned int length;
};
} // namespace bullpgia