#include <stdio.h>
#include <string.h>

/*
    In C programming, a struct is a collection of variables which can be of different data 
    types under a single name.
*/

// Create struct
struct Person {
  char name[50];
  int id;
  float salary;
};

int Struct() {

    struct Person person1;

    // assign value to name of person1
    strcpy(person1.name, "Aditya Rahalkar");

    // assign values to other person1 variables
    person1.id = 761984;
    person1.salary = 2500000;

    // print struct variables
    printf("Name: %s\n", person1.name);
    printf("Citizenship No.: %d\n", person1.id);
    printf("Salary: %.2f", person1.salary);

    return 0;
}

/*
    Notice that we have used strcpy() function to assign the value to person1.name.This 
    is because name is a char array (C-string) and we cannot use the assignment operator '=' 
    with it after we have declared the string.
*/