#include <stdio.h>
#include <string.h>

/*
    In C, a struct (short for structure) is a user-defined data type that allows grouping of 
    variables under one name. These variables, known as members, can have different data types. 
    Structs are used to model complex data structures by combining data types like int, float, 
    char, and even arrays or other structs.

    Key Points About Structs:
        1. Definition       : A struct defines a collection of variables (members) that can be of different 
                              types, but are logically grouped together.
        2. Accessing Members: You can access struct members using the dot (.) operator or the arrow (->) 
                              operator for pointers.
        3. Memory Allocation: The size of a struct is the sum of the sizes of its members, but padding 
                              (for alignment) may be added by the compiler to optimize access.
        4. Pass by Value    : Structs can be passed to functions by value or by reference (using pointers), 
                              similar to primitive types.
        5. Nested Structs   : Structs can be nested inside other structs.
*/

// Defining a struct to represent a Date
struct Date {
    int day;
    int month;
    int year;
};

// Defining a struct to represent a Person
struct Person {
    char name[50];
    int age;
    float height;
    struct Date birthdate;  // Nested struct
};

int Struct() {
    // Declare and initialize a Person struct
    struct Person person1;

    // Assign values to the members of person1
    strcpy(person1.name, "John Doe");  // Assigning string to the char array
    person1.age = 30;                  // Assigning integer
    person1.height = 5.9;              // Assigning float

    // Assigning values to the nested struct (birthdate)
    person1.birthdate.day = 15;
    person1.birthdate.month = 7;
    person1.birthdate.year = 1993;

    // Accessing and printing the struct members
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.1f\n", person1.height);
    printf("Birthdate: %02d/%02d/%d\n", person1.birthdate.day, person1.birthdate.month, person1.birthdate.year);

    return 0;
}


/*
    Notice that we have used strcpy() function to assign the value to person1.name.This 
    is because name is a char array (C-string) and we cannot use the assignment operator '=' 
    with it after we have declared the string.
*/