#pragma once
#include <string>
using namespace std;

namespace bullpgia
{
class Guesser
{
public:
    unsigned int length;

    virtual string guess() = 0;
    virtual void startNewGame(uint len){}
    virtual void learn(string){}
};
} // namespace bullpgia

