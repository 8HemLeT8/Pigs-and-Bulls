#include "calculate.hpp"
#include "Guesser.hpp"

using namespace std;
using bullpgia::Guesser;
namespace bullpgia{
class SmartGuesser : public Guesser{
    public:
    string guess() override;
    void learn(string) override;
    void startNewGame(uint len) override;

};

}