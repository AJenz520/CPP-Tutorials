#include <iostream>
#include <vector>


void printFigure(int incorrect_guesses) {
    switch (incorrect_guesses)
    {
    case 0:
        std::cout << "+-----+" << std::endl;
        std::cout << "|     |" << std::endl;
        std::cout << "|" << std::endl;
        std::cout << "|" << std::endl;
        std::cout << "|" << std::endl;
        std::cout << "|" << std::endl;
        break;
    case 1:
        std::cout << "+-----+" << std::endl;
        std::cout << "|     |" << std::endl;
        std::cout << "|     O" << std::endl;
        std::cout << "|" << std::endl;
        std::cout << "|" << std::endl;
        std::cout << "|" << std::endl;
        break;
    case 2:
        
        break;
    case 3:
        
        break;
    case 4:
        
        break;
    case 5:
        
        break;
    
    default:
        break;
    }
}

/*
+-----+
|     | 
|     O 
|    /|\
|    / \
|
Word: _ _ _
*/



int main() {

    // Hangman Game
    //  - We want the target word
    //  - We want a variable that is the user's guess
    //  - Input user guess
    //  - Check if guess is correct
    //  - If guess is not correct, then output the hangman at various stages
    //  - We want to keep track of incorrect guesses
    //  - After each guess we display the figure, the number of incorrect guess, the word (with filled in letters)

    std::string word = "Hello";
    int incorrect_guesses = 0;
    std::vector<char> guessed_letters;


    std::cout << "Do you want to guess a letter (L) or the whole word (W)?: ";
    char input;
    std::cin >> input;
    

    while(incorrect_guesses < 6){
        if(input == 'L') { // Guessing a letter
            std::cout << "Enter a letter you think is in the word: ";
            std::string letter;
            std::cin >> letter;

            // Check if the user entered a letter they've already guessed
            if() {
                
            }


            if(word.find(letter) == std::string::npos) { // Guess was incorrect
                incorrect_guesses++;
                printFigure(incorrect_guesses);
            }
            else { // Correctly guessed a letter in the word
                std::cout << "That letter is in the word." << std::endl;
                printFigure(incorrect_guesses);
            }

        }
        else { // Guessing the word
            std::cout << "Enter your guess for the word: ";
            std::string guess;
            std::cin >> guess;

        }
    }


    return 0;
}