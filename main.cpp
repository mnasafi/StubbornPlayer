#include "SecretDoor/SecretDoor.h"
#include <iostream>
#include <string>

using namespace std;


int main()
{

    // declare and initialize variables
    SecretDoor game;

    int playCount = 0;

    int timesWon = 0;

    string playerName;


    // ask for player name and store into playerName
    cout << "What is your name? ";
    cin >> playerName;

    // Greet player Price is Right show style
    cout << "\n== " << playerName << " ,come on down to play Door Price Game! == " << endl;

    // ask player how many times to play
    cout << "How many times you would like to play? " ;
    cin >> playCount;

    // repeat game based on user input

    for (int x = 0; x < playCount; x++)
    {
        // starts new name
        game.newGame();
        
        // force door C to be always picked each time. User has no choice or input.-
        game.guessDoorC();
        game.guessDoorC();

        // keep track of how many times won
        if(game.isWinner() == true)
        {
            timesWon++;
        }


    } // end if

    //

    
    // announce times game was won

    cout << "\nWOW! That is a new record folks!" << endl;
    cout << playerName << " has set a new Door Prize game record by winning " << timesWon << " times!" << endl;

    

    //end program  
    return 0;
}
