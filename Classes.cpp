/*
            Classes

    When programming, we often want to store information regarding some object, thing, or person. This could include things
    like a person's age, location, job, etc. Using variables for this can get challenging the more people we have. Imagine
    having to keep track of 100 different ages, locations, jobs, and so on. Instead, we can create a class that has these
    variables defined and simply make an instance of the class whenever we want to make a new person.

    The basic format for a class is as follows:

    class (Class Name) {
        // some code
    };

    This is the most basic way to define a class, though we can add some more to it. 

*/

#include <iostream>

// Here's an example of a person class

class Person {
    // The private keyword makes it so anything after it is not accessible outside of the class
    private:
        std::string name;
        int age;
        std::string location;
        std::string job;
    
    // The public keyword makes it so anything after it is accessible outside of the class
    public:

        // Constructors
        //  - These allow us to pass in values for our variables and assign them when creating our instance of the class.

        Person() {  // This is a Default constructor (when no variables are passed in)
            name = "";
            age = 0;
            location = "Earth";
            job = "Unemployed";
        }

        // "this" Keyword
        //  - The this keyword references the instance of the class we made. For instance, in this constructor,

        Person(std::string name) {
            this->name = name;
            Person();  // We call the default constructor
        }

        // we use this->name to refer to the name of a specific instance of a class. This was helpful since we also names
        // our parameter name, which avoided any confusion the compiler may have had trying to differentiate between the two
        // name variables. "this" has many applications outside of just calling variables, but for now, this will be good enough
        // to know for our purposes.


        // Other Constructors

        Person(std::string name, int age) {
            this->age = age;
            Person(name);
        }

        Person(std::string name, int age, std::string location) {
            this->location = location;
            Person(name, age);
        }

        Person(std::string name, int age, std::string location, std::string job) {
            this->job = job;
            Person(name, age, location);
        }


        // Getter Functions
        //  - These allow us the get the values of certain variables without having access to the actual varibles themselves.
        //  - This is mainly done for security reasons.
        std::string getName() {
            return name;
        }
        int getAge() {
            return age;
        }
        std::string getLocation() {
            return location;
        }
        std::string getJob() {
            return job;
        }

        // Setter Functions
        //  - Theses allow us to set the values of certain variables without having access to the actual variables themselves.
        //  - Once again, this is done for security reasons.
        void setName(std::string new_name) {
            name = new_name;
        }
        void setAge(int new_age) {
            age = new_age;
        }
        void setLocation(std::string new_location) {
            location = new_location;
        }
        void setJob(std::string new_job) {
            job = new_job;
        }


};


int main() {
int a = static_cast<int>('A');
    // Creating an Instance of a Class
    //  - To create an instance of the Person class, we would write:
    Person person_1;
    // This would create an instance of the Person class called person_1. It calls the defult constructor when initialized.

    // If we want to initialize one or more of the variables, we could write:
    Person person_2("Sofia", 34, "Boston", "Electrical Engineer");
    // This would create an instance of the Person class called person_2, who's name is Sofia, is 34 years old, lives in Boston,
    // and works as an electrical engineer.

    std::cout << a;

    return 0;
}