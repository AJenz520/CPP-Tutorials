#include <iostream>
#include <cstdlib>

int main() {

    // Generates a random number between 1 and 100
    int random_number = (rand() % 100) + 1;

    int guess;

    // Asks the user to guess the number until they get it right
    do {
        std::cout << "Enter a number between 1 and 100, inclusive: ";
        std::cin >> guess;

        if(guess == random_number) {
            std::cout << "That is correct!" << std::endl;
        }
        else {
            if(guess > random_number) {
                std::cout << "Too High!" << std::endl;
            }
            else {
                std::cout << "Too Low!" <<std::endl;
            }
        }
    } while (guess != random_number);


    return 0;
}