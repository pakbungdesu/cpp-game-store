

#include <iostream>
#include "rckppscis.h"
#include "hangman.h"
#include "blackjack.h"
#include "aunction.h"
#include "caesar.h"
#include "calculator.h"
#include "numberg.h"
#include "numbercon.h"
using namespace std;

int main()
{
    int choice;
    void (*pf[])() = { play_RPS, play_hangman, play_blackjack, play_aunction, \
    play_caesar, play_calculator, play_numberg, play_numbercon };

    cout << "Pick the number of game you wanna play\n\
1 - Rock Paper Scissor\n\
2 - Hangman\n\
3 - Blackjack\n\
4 - Aunction\n\
5 - Caesar Cipher\n\
6 - Calculator\n\
7 - Number Guessing\n\
8 - Number Conversion" << endl;
    
    cin >> choice;
    pf[choice - 1]();
    return 0;

}

