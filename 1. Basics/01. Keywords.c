#include "stdio.h"

/*
     1. (auto)
        -> The auto keyword declares automatic variables. 
           Syntax:
            [
                auto int var1;
            ]
        -> This statement suggests that var1 is a variable of storage class auto and type int.Variables 
           declared within function bodies are automatic by default. They are recreated each time a function is executed.
           Since automatic variables are local to a function, they are also called local variables.
    
     2. (break) and (continue)
        -> The break statement terminates the innermost loop immediately when it's encountered. It's also used to 
           terminate the switch statement.
        -> The continue statement skips the statements after it inside the loop for the iteration.
           Syntax:
            [
                for (i=1;i<=10;++i){
                if (i==3)
                continue;
                if (i==7)
                break;
                printf("%d ",i);
                }
            ] 
            Output:
            1 2 4 5 6
        -> When i is equal to 3, the continue statement comes into effect and skips 3. When i is equal to 7, the 
           break statement comes into effect and terminates the for loop.
    
     3. (switch), (case) and (default)
        -> The switch and case statement is used when a block of statements has to be executed among many blocks. 
           Syntax
            [
                switch(expression)
                {
                    case '1':
                    //some statements to execute when 1
                    break;
                    case '5':
                    //some statements to execute when 5
                    break;
                    default:
                    //some statements to execute when default;
                }
            ]

     4. (char)
        -> The char keyword declares a character variable.
           Syntax:
            [
                char alphabet;
            ]
        -> Here, alphabet is a character type variable.

    5. (const)
       -> An identifier can be declared constant by using the const keyword.
          Syntax:
           [
                const int a = 5;
           ]

    6. (do...while)
       Syntax:
        [
            int i;
            do 
            {
            printf("%d ",i);
            i++;
            }
            while (i<10)
        ]

    7. (double) and (float)
       -> Keywords double and float are used for declaring floating type variables.
          Syntax:
           [
                float number;
                double longNumber;
           ]
       -> Here, number is a single-precision floating type variable whereas, longNumber is a 
          double-precision floating type variable.
    
    8. (if) and (else)
       Syntax:
        [
            if (i == 1):
                printf("i is 1.");
            else:
                printf("i is not 1.");
        ]
        -> If the value of i is other than 1, 
           the output will be:
           i is not 1
    
    9. (enum)
       -> Enumeration types are declared in C programming using keyword enum.
          Syntax:
            [
                enum suit
                {
                    hearts;
                    spades;
                    clubs;
                    diamonds;
                };
            ]
       -> Here, an enumerated variable suit is created having tags: hearts, spades, clubs, and diamonds.

    10. (extern)
        -> The extern keyword declares that a variable or a function has external linkage outside of 
           the file it is declared.
        
    11. (for)
        -> There are three types of loops in C programming. The for loop is written in C programming 
           using the keyword for.
           Syntax:
            [
                for (i=0; i< 9;++i){
                printf("%d ",i);
                }
            ]
           Output:
           0 1 2 3 4 5 6 7 8

    12. (goto)
        -> The goto statement is used to transfer control of the program to the specified label.
           Syntax:
            [
                for(i=1; i<5; ++i)
                {
                    if (i==10)
                    goto error;
                }
                printf("i is not 10");
                error:
                    printf("Error, count cannot be 10.");
            ]
           Output:
           Error, count cannot be 10.
    
    13. (int)
        -> The int keyword is used to declare integer type variables.
           Syntax:
            [
                int count;
            ]

    14. (short), (long), (signed) and (unsigned)
        -> The short, long, signed and unsigned keywords are type modifiers that alter the meaning 
           of a base data type to yield a new type.
           Syntax:
            [
                short int smallInteger;
                long int bigInteger;
                signed int normalInteger;
                unsigned int positiveInteger;
            ]
        -> __________________________________________________
           |       DATA TYPES       |        RANGE          |
           |________________________|_______________________|
           |

*/