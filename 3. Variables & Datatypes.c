#include <stdio.h>
#include <stdbool.h>

/*
    -> Allocated space in memory to store a value.
    -> We refer to a variable's name to access the stored value.
    -> That variable now behaves as if it was the value it contains.
    -> But we need to declare what type of data we are storing.
*/

void variables(){
    int age = 24;
    float pi = 3.14;
    char hashtag = '#';
    const float Boltzmann = 6.626;
    char arr[] = "Aditya Rahalkar";

    printf("Hello %s\n", arr);
    printf("You are %d years old\n", age);
    printf("%f\n",pi);
    printf("Hashtag is %c\n", hashtag);
}

void datatypes(){
    /*
        Primary:
            -> Integer
            -> Character
            -> Floating Point
            -> Double
            -> Void
        
        Derived:
            -> Function
            -> Array
            -> Pointer
        
        User Defined:
            -> Struct
            -> Union
            -> Enum
    */
    char a = 'C';                   // single character     %c
    char b[] = "Hello";             // array of characters  %s

    float c = 3.141592;             // 4 bytes (32 bits of precision) 6 - 7 digits    %f
    double d = 3.141592653589793;   // 8 bytes (64 bits of precision) 15 - 16 digits  %lf

    bool e = true;
}