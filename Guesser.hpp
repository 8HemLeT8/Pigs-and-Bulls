#pragma once
#include <string>
using namespace std;

namespace bullpgia
{
class Guesser
{
protected:
    unsigned int length;
public:
    virtual string guess() = 0;
    virtual void startNewGame(uint a){}
    virtual void learn(string){}
};
} // namespace bullpgia

