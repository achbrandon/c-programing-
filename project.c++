#include <iostream>
#include <cstdlib>
#include <ctime>

void GuessNumber();

int main()
{
    srand(static_cast<unsigned>(time(nullptr)); // generate a different number each time
    GuessNumber(); // function call
    return 0;
}

// function definition
void GuessNumber()
{
    char playAgain = 'n'; // Initialize to 'n' (no) by default

    do {
        int CPUNum = rand() % 20 + 1;
        int UserNum = 0;
        int GuessCount = 0;

        std::cout << "I have a new number from 1 to 20." << std::endl;
        std::cout << "You have 3 attempts to guess my number." << std::endl;

        for (int attempt = 1; attempt <= 3; ++attempt) {
            std::cout << "Attempt " << attempt << ": Please enter your guess: ";
            std::cin >> UserNum;
            GuessCount++;

            if (UserNum < CPUNum)
            {
                std::cout << "Too low. Try again." << std::endl;
            }
            else if (UserNum > CPUNum)
            {
                std::cout << "Too high. Try again." << std::endl;
            }
            else
            {
                std::cout << "Congratulations! You guessed the number in " << GuessCount << " attempts." << std::endl;
                break; // Break the loop if the guess is correct
            }
        }

        if (UserNum != CPUNum) {
            std::cout << "Sorry, you've used all your attempts. The correct number was: " << CPUNum << std::endl;
        }

        std::cout << "Do you want to play again? (y for yes, n for no): ";
        std::cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    std::cout << "Thanks for playing the game. Goodbye!" << std::endl;
}
