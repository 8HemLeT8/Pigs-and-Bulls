#pragma once
#include <string>
using namespace std;

namespace bullpgia{
    
    class Guesser{
        public:
        void startNewGame(uint);
        virtual string guess() = 0;
        void learn(string);
        unsigned int length;

    };
}