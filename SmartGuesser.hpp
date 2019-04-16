#include "calculate.hpp"
#include "Guesser.hpp"

using namespace std;
using namespace bullpgia;

class SmartGuesser : public Guesser{
    public:
    unsigned int play();
    string guess() override;
};