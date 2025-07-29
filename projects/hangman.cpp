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
        std::cout << "+-----+" << std::endl;
        std::cout << "|     |" << std::endl;
        std::cout << "|     O" << std::endl;
        std::cout << "|     |" << std::endl;
        std::cout << "|" << std::endl;
        std::cout << "|" << std::endl;
        break;
    case 3:
        std::cout << "+-----+" << std::endl;
        std::cout << "|     |" << std::endl;
        std::cout << "|     O" << std::endl;
        std::cout << "|     |\\" << std::endl;
        std::cout << "|" << std::endl;
        std::cout << "|" << std::endl;
        break;
    case 4:
        std::cout << "+-----+" << std::endl;
        std::cout << "|     |" << std::endl;
        std::cout << "|     O" << std::endl;
        std::cout << "|    /|\\" << std::endl;
        std::cout << "|" << std::endl;
        std::cout << "|" << std::endl;
        break;
    case 5:
        std::cout << "+-----+" << std::endl;
        std::cout << "|     |" << std::endl;
        std::cout << "|     O" << std::endl;
        std::cout << "|    /|\\" << std::endl;
        std::cout << "|    /" << std::endl;
        std::cout << "|" << std::endl;
        break;
        std::cout << "+-----+" << std::endl;
        std::cout << "|     |" << std::endl;
        std::cout << "|     O" << std::endl;
        std::cout << "|    /|\\" << std::endl;
        std::cout << "|    / \\" << std::endl;
        std::cout << "|" << std::endl;
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

    //  - Add a disply for the word with underscores for unfilled letters
    //  - Add a way to tell if we got all the letters or guessed the word correctly
    //  - Make it so it prints out the last display if we lose

    std::string word = "Hello";
    int incorrect_guesses = 0;
    int letters_left = word.length();
    std::vector<char> guessed_letters;


    while(incorrect_guesses < 6){
        std::cout << "Do you want to guess a letter (L) or the whole word (W)?: ";
        char input;
        std::cin >> input;

        if(input == 'L') { // Guessing a letter
            std::cout << "Enter a letter you think is in the word: ";
            char letter;
            std::cin >> letter;

            // Check if the user entered a letter they've already guessed
            bool already_guessed = false;
            for (int i = 0; i < guessed_letters.size(); i++)
            {
                if(guessed_letters.at(i) == letter) {
                    already_guessed = true;
                    break;
                }
            }
            
            if(already_guessed) {
                std::cout << "You already guessed that letter." << std::endl;
                continue;
            }


            if(word.find(letter) == std::string::npos) { // Guess was incorrect
                incorrect_guesses++;
                printFigure(incorrect_guesses);
                guessed_letters.push_back(letter);
            }
            else { // Correctly guessed a letter in the word
                std::cout << "That letter is in the word." << std::endl;
                printFigure(incorrect_guesses);
                guessed_letters.push_back(letter);

                // Decrease letters_left
                for (int i = 0; i < word.length(); i++)
                {
                    if(word[i] == letter) {
                        letters_left--;
                    }
                }
            }

            if(letters_left == 0) {
                std::cout << "You Won!" << std::endl;
                break;
            }

        }
        else { // Guessing the word
            std::cout << "Enter your guess for the word: ";
            std::string guess;
            std::cin >> guess;

            if(guess == word) {
                std::cout << "You Won!" << std::endl;
                break;
            }
            else {
                incorrect_guesses++;
                printFigure(incorrect_guesses);
            }
        }
    }


    return 0;
}