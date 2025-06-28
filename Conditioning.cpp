/*
            If and Switch Statements

    If statements offer a way to run a certain section of code only when some condition is met. Say you have a
    variable containing the grade of a student and you want to output "You Passed!" if the student passed or 
    "You Failed!" if the student failed. If statements allow you to check to grade value and output the desired
    response.

    Format:
    if (CONDITION 1) {
        // do something
    }
    else if (CONDITION 2) {  <-- If condition 1 was false, condition 2 is checked
        // do something      <-- If condition 2 is true, the code here executes and remaining
    }                            conditions are ignored
    else if (CONDITION 3) {
        // do something
    }                        <-- Can have as many else if statements as you want
    ...
    else {                   <-- Else statement is executed last and only if all conditions are false
        // do something
    }

    NOTE: If the code in the if statement is just one line, curly braces are not required.

    Switch statements are similar to if statements and are often used when needing to check if a variable is
    equal to a lot of values. It provides as simpie and clearer way to check conditions.

    Format:
    switch (variable) {
        case VALUE 1:           <-- The value of the variable is matched against each case. If the variable
            // do something         equals that value, the code under the case executes.
            break;              <-- Break statements aren't required but are recommended. If not present, all code
        case VALUE 2:               after a valid case will run, including other case code.
            // do something
            break;
        ...                     <-- Can have as many cases as you want.
        default:                <-- Optional default condition. Will execute if none of the cases matched the
            // do something         variable or a case was valid and there was no break statement.
            break;
    }

*/

#include <iostream>

int main() {

    const int PASSING_GRADE = 70;

    // ################### If Statements ###################

    // Get users grade
    int grade;
    std::cout << "Enter your grade: ";
    std::cin >> grade;

    // Check if the user passed
    if (grade >= PASSING_GRADE) {
        std::cout << "You Passed!";
    }
    else {
        std::cout << "You Failed!";
    }

    // Maybe we want to indicate if they were close to passing
    if (grade >= PASSING_GRADE) {
        std::cout << "You Passed!";
    }
    else if (grade >= 60) {
        std::cout << "You Almost Passed!";
    }
    else {
        std::cout << "You Failed!";
    }

    // ################### Switch Statements ###################

    // Get letter grade from user
    char letter_grade;
    std::cout << "Enter your letter grade: ";
    std::cin >> letter_grade;

    // Say how well they did
    switch (letter_grade)
    {
    case 'A':
        std::cout << "You did Amazing!";
        break;
    case 'B':
        std::cout << "You did Great!";
        break;
    case 'C':
        std::cout << "You did Good!";
        break;
    case 'D':
        std::cout << "You did Okay!";
        break;
    case 'F':
        std::cout << "You did Bad!";
        break;
    default:
        std::cout << "I don't know what that grade is.";
        break;
    }
    
    return 0;
}