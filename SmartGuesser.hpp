#include "calculate.hpp"
#include "Guesser.hpp"

using namespace std;
using namespace bullpgia;
class SmartGuesser : public Guesser{
    public:
    string guess() override;
    void learn(string) override;
    void startNewGame(uint ut) override;

};