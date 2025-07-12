/*
            Enumerations
    
    Enumerations (enums) are a user-defined data type in C++ that consists of a set of named integral constants. They are used 
    to define variables that can only take one out of a small set of possible values, making the code more readable 
    and maintainable.

*/

// Example Enum
enum DayOfTheWeek {
    Sunday = 1,
    Monday = 2,
    Tuesday = 3,
    Wednesday = 4,
    Thursday = 5,
    Friday = 6,
    Saturday = 7
};
// This enum represents the days of the week, where each day is associated with a specific integer value.
// The values can be used to represent the days in a more readable way, rather than using raw integers.
// For instance, saying the day is "Sunday" is clearer than saying the day is "1".


// Other Enum Examples
enum Color {
    Red,
    Green,
    Blue
};
// Here, we define an enum for colors. The values will automatically be assigned starting from 0, so 
// Red = 0, Green = 1, Blue = 2.

enum class DifficultyLevel {
    Easy,
    Medium,
    Hard
};
// Here, we define a scoped enum (enum class) for difficulty levels. Scoped enums prevent name conflicts 
// and require the enum name to be used to access the values, e.g., DifficultyLevel::Easy.
// This prevents potential conflicts with other enums or variables in the code.

enum Temperature {
    Cold = 5,
    Warm,
    Hot
};
// Here, we defined the Cold temperature as 5. The other temperature values will automatically be assigned
// sequentially, so Warm = 6 and Hot = 7.

#include <iostream>

int main() {

    // Create an instance of the first enum
    DayOfTheWeek day = Friday;

    // If we output the value of day, it will return the integer value associated with Friday
    // In this case, it will output 6
    std::cout << "The value of day is: " << day << std::endl;

    // We can also use the enum in a switch statement to perform different actions based on the day
    switch (day) {
        case Sunday:
            std::cout << "It's Sunday!" << std::endl;
            break;
        case Monday:
            std::cout << "It's Monday!" << std::endl;
            break;
        case Tuesday:
            std::cout << "It's Tuesday!" << std::endl;
            break;
        case Wednesday:
            std::cout << "It's Wednesday!" << std::endl;
            break;
        case Thursday:
            std::cout << "It's Thursday!" << std::endl;
            break;
        case Friday:
            std::cout << "It's Friday!" << std::endl;
            break;
        case Saturday:
            std::cout << "It's Saturday!" << std::endl;
            break;
        default:
            std::cout << "Invalid day!" << std::endl;
    }
    // Having the cases named after the days of the week makes the code more readable and easier to understand.



    // Using the Color enum
    Color favoriteColor = Blue;
    if (favoriteColor == Blue) {
        std::cout << "Your favorite color is Blue!" << std::endl;
    }


    // Using the DifficultyLevel enum class
    DifficultyLevel gameDifficulty = DifficultyLevel::Medium;
    if (gameDifficulty == DifficultyLevel::Medium) {
        std::cout << "The game difficulty is set to Medium." << std::endl;
    }

    return 0;
}