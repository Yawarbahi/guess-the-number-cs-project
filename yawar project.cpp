#include <iostream>
#include <ctime>

using namespace std;

int main() 
{
	
    // Generate random seed
    srand(time(0));

    // Generate a number between 1 and 20
    int secretNumber = rand() % 20 + 1;

    // Define the number of attempts
    int maxAttempts = 5;

    cout << "Welcome to Guess the Number game!" << endl;
    cout << "You have " << maxAttempts << " attempts to guess the number." << endl;

    // Loop for the guessing game
    for (int attempt = 1; attempt <= maxAttempts; attempt++) 
	{
        cout << "Attempt " << attempt << " of " << maxAttempts << endl;
        
        // Ask for the user's guess
        int guess;
        
        cout << "Enter your guess (1-20): ";
        cin >> guess;

        // Check if the guess is correct or not
        if (guess > secretNumber) 
		{
            cout << "Too high! Try again." << endl;
        } 
		
		else if (guess < secretNumber) 
		{
            cout << "Too low! Try again." << endl;
        }
        
		else 
		{
            cout << "Congratulations! You guessed the right number!" << endl;
            break;  // Exit the loop if the guess is correct
        }

        // If it's the last attempt, reveal the correct number
        if (attempt == maxAttempts) 
		{
            cout << "Sorry, you've used all your attempts. The correct number was " << secretNumber << "." << endl;
        }
    }

    return 0;
}
