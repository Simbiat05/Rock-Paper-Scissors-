// These are the header files that we need for the code.
// We need iostream for input and output, cstdlib for rand() and srand(), and ctime for time(NULL).


#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <iomanip>


using namespace std;



//This is the main function of the code. We first set up the random number generator 
//using srand() and time(NULL) to seed the generator. Then, we declare two integer variables to store the player's 
//and computer's choices. We prompt the player to choose rock, paper, or scissors using cout and cin.
void intro();
int main()
{
	intro();
    // Set up random number generator
    srand(time(NULL));

    // Declare variables
    int playerChoice, computerChoice;

    // Prompt player to choose rock (1), paper (2), or scissors (3)
    cout << "\n\tChoose rock (1), paper (2), or scissors (3): ";
    cin >> playerChoice;




    //We generate a random number between 1 and 3 inclusive to represent the computer's choice using rand() % 3 + 1. 
    //This will generate a random number between 0 and 2 inclusive, and we add 1 to shift it to the range of 1 to 3.
    // Generate random choice for computer
    computerChoice = rand() % 3 + 1;

    // Print out the choices
    cout << "\tYou chose ";
    if (playerChoice == 1) cout << "rock." << endl;
    else if (playerChoice == 2) cout << "paper." << endl;
    else cout << "scissors." << endl;

    cout << "\tComputer chose ";
    if (computerChoice == 1) cout << "rock." << endl;
    else if (computerChoice == 2) cout << "paper." << endl;
    else cout << "scissors." << endl;

    // Determine winner and print out result
    if (playerChoice == computerChoice) cout << "\tIt's a tie!" << endl;
    else if (playerChoice == 1 && computerChoice == 3) cout << "\tYou win!" << endl;
    else if (playerChoice == 2 && computerChoice == 1) cout << "\tYou win!" << endl;
    else if (playerChoice == 3 && computerChoice == 2) cout << "\tYou win!" << endl;
    else cout << "Computer wins!" << endl;

    return 0;
}
        // Introduction section 
void intro(){
    cout << "\n\n\n\t     ROCK PAPER SCISSORS GAME";
    cout << "\n\n\n\n\t     MADE BY:MOJEED SIMBIAT";
    cout << "\n\n\n\n\t     MATRIC NO: H/CTE/22/0698";
    cout << "\n\n\n\n\t     SUPERVISOR : ENGR NZUBE";
    cout << "\n\n\n\n\t     SCHOOL : THE FEDERAL POLYTECHNIC ILARO";
    cin.get();
}
