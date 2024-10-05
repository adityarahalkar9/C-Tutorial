#include <stdio.h>

/*
    Operators are symbols that perform operations on variables and values.
    Operators in C++ can be classified into 6 types:

    1. Arithmetic Operators
    2. Relational Operators
    3. Logical Operators
    4. Bitwise Operators
    5. Assignment Operators
    6. Ternary or Conditional Operators
*/

/*
    => ARITHMETIC Operators: 
       Arithmetic operators are used to perform arithmetic operations on variables and data
        _______________________________________________________________________________________________________
        |     NAME            |  SYMBOL  |                 DESCRIPTION                  |       EXAMPLE       |
        |_____________________|__________|______________________________________________|_____________________|
        | Increment Operator  |    ++    |  Increases the integer value of the variable |   int a=5;          |
        |                     |          |  by one.                                     |   a++; //returns 6  | 
        |_____________________|__________|______________________________________________|_____________________|
        | Decrement Operator  |    --    |  Decreases the integer value of the variable |   int a=5;          | 
        |                     |          |  by one.                                     |   a--; //returns 4  | 
        |_____________________|__________|______________________________________________|_____________________|  
        |      Addition       |    +     |            Adds two operands.                |   int a=5;b=6       |
        |                     |          |                                              |   int c=a+b; //c=9  |
        |_____________________|__________|______________________________________________|_____________________|      
        |     Subtraction     |    -     |         Subtracts two operands.              |   int a=6;b=5       |
        |                     |          |                                              |   int c=a-b; //c=1  |
        |_____________________|__________|______________________________________________|_____________________|
        |    Multiplication   |    *     |         Multiplies two operands.             |   int a=5;b=6       |
        |                     |          |                                              |  int c=a*b; //c=30  |
        |_____________________|__________|______________________________________________|_____________________|
        |      Division       |    /     |  Divides first operand by the second operand.|   int a=13;b=6      |
        |                     |          |                                              |   int c=a/b; //c=2  |
        |_____________________|__________|______________________________________________|_____________________|
        |  Modulo Operation   |    %     |  Returns the remainder an integer division.  |   int a=13;b=6      |
        |                     |          |                                              |   int c=a%b; //c=1  |
        |_____________________|__________|______________________________________________|_____________________|
*/
int Arithmetic(){
    int a = 8, b = 3;

    // Addition operator
    printf("a + b = %d\n", (a + b));
  
    // Subtraction operator
    printf("a - b = %d\n", (a - b));
  
    // Multiplication operator
    printf("a * b = %d\n", (a * b));
  
    // Division operator
    printf("a / b = %d\n", (a / b));
  
    // Modulo operator
    printf("a %% b = %d\n", (a % b));  // Use %% for printing %

    return 0;
}


/*
    => RELATIONAL Operators: 
       Relational operators are used for the comparison of the values of two operands.
        __________________________________________________________________________________________________
        |     NAME            |  SYMBOL  |              DESCRIPTION                |       EXAMPLE       |
        |_____________________|__________|_________________________________________|_____________________|
        |   is equal to       |    ==    |  Checks if both operands are equal.     |   int a=3;b=6;      |
        |                     |          |                                         |       a==b;         | 
        |                     |          |                                         |   //returns false   |
        |_____________________|__________|_________________________________________|_____________________|
        |   greater than      |    >     |  Checks if first operand is greater     |   int a=3;b=6;      |
        |                     |          |  than the second operand.               |       a>b;          | 
        |                     |          |                                         |   //returns false   |
        |_____________________|__________|_________________________________________|_____________________|
        |   greater than or   |    >=    |  Checks if first operand is greater     |   int a=3;b=6;      |
        |   equal to          |          |  than or equal to the second operand.   |       a>=b;         | 
        |                     |          |                                         |   //returns false   |
        |_____________________|__________|_________________________________________|_____________________|
        |   less than         |    <     |  Checks if first operand is less        |   int a=3;b=6;      |
        |                     |          |  than the second operand.               |       a<b;          | 
        |                     |          |                                         |   //returns true    |
        |_____________________|__________|_________________________________________|_____________________|
        |   less than or      |    <=    |  Checks if first operand is less        |   int a=3;b=6;      |
        |   equal to          |          |  than or equal to the second operand.   |       a<=b;         | 
        |                     |          |                                         |   //returns true    |
        |_____________________|__________|_________________________________________|_____________________|
        |   Not equal to      |    !=    |  Checks if both operands are not equal. |   int a=3;b=6;      |
        |                     |          |                                         |       a!=b;         | 
        |                     |          |                                         |   //returns true    |
        |_____________________|__________|_________________________________________|_____________________|

*/
int Relational(){
    int a = 6, b = 4;

    // Equal to operator
    printf("a == b is %d\n", (a == b));
  
    // Greater than operator
    printf("a > b is %d\n", (a > b));
  
    // Greater than or Equal to operator
    printf("a >= b is %d\n", (a >= b));
  
    // Lesser than operator
    printf("a < b is %d\n", (a < b));
  
    // Lesser than or Equal to operator
    printf("a <= b is %d\n", (a <= b));
  
    // Not equal to operator
    printf("a != b is %d\n", (a != b));

    return 0;
}


/*
    => LOGICAL Operators: 
       logical operators are used to combine two or more conditions or constraints or to complement the 
       evaluation of the original condition in consideration. The result returns a Boolean value, 
       i.e., true or false.
        __________________________________________________________________________________________________
        |     NAME            |  SYMBOL  |              DESCRIPTION                |       EXAMPLE       |
        |_____________________|__________|_________________________________________|_____________________|
        |   Logical AND       |    &&    |  Returns true only if all the operands  |   int a=3;b=6;      |
        |                     |          |  are true or non-zero.                  |       a&&b;         | 
        |                     |          |                                         |   //returns true    |
        |_____________________|__________|_________________________________________|_____________________|
        |   Logical OR        |    ||    |  Returns true if either of the operands |   int a=3;b=6;      |
        |                     |          |  is true or non-zero.                   |       a||b;         | 
        |                     |          |                                         |   //returns true    |
        |_____________________|__________|_________________________________________|_____________________|
        |   Logical NOT       |    !     |  Returns true if the operand is         |   int a=3;          |
        |                     |          |  false or zero.                         |     !=a;            | 
        |                     |          |                                         |   //returns false   |
        |_____________________|__________|_________________________________________|_____________________|
 
*/
int Logical(){
    int a = 6, b = 4;

    // Logical AND operator
    printf("a && b is %d\n", (a && b));
  
    // Logical OR operator
    printf("a || b is %d\n", (a || b));
  
    // Logical NOT operator
    printf("!b is %d\n", (!b));

    return 0;
}


/*
    => BITWISE Operators:
       These operators are used to perform bit-level operations on the operands. The operators 
       are first converted to bit-level and then the calculation is performed on the operands. 
       Mathematical operations such as addition, subtraction, multiplication, etc. can be 
       performed at the bit level for faster processing. 

        __________________________________________________________________________________________________
        |     NAME         |    SYMBOL   |              DESCRIPTION                |       EXAMPLE       |
        |__________________|_____________|_________________________________________|_____________________|
        |   Binary AND     |      &      |  Copies a bit to the evaluated result   |   int a=2; b=3;     |
        |                  |             |  if it exists in both operands.         |       (a&b);        | 
        |                  |             |                                         |   //returns 2       |
        |__________________|_____________|_________________________________________|_____________________|
        |   Binary OR      |      |      |  Copies a bit to the evaluated result   |   int a=2; b=2;     |
        |                  |             |  if it exists in any of the operand.    |       (a|b);        | 
        |                  |             |                                         |   //returns 3       |
        |__________________|_____________|_________________________________________|_____________________|
        |   Binary XOR     |      ^      |  Copies the bit to the evaluated result |   int a=2; b=2;     |
        |                  |             |  if it is present in either of the      |       (a^b);        | 
        |                  |             |  operands but not both.                 |   //returns 1       |
        |__________________|_____________|_________________________________________|_____________________|
        |   Left shift     |      <<     |  Shifts the value to left by the        |   int a=2; b=2;     |
        |                  |             |  number of bits specified by the right  |       (a<<b);       | 
        |                  |             |  operand.                               |   //returns 4       |
        |__________________|_____________|_________________________________________|_____________________|
        |   Right shift    |      >>     |  Shifts the value to right by the       |   int a=2; b=2;     |
        |                  |             |  number of bits specified by the right  |       (a>>b);       | 
        |                  |             |  operand.                               |   //returns 1       |
        |__________________|_____________|_________________________________________|_____________________|
        |       One's      |      ~      |  Changes binary digits 1 to 0 and       |   int b=3;          |
        |    Complement    |             |  0 to 1                                 |   (~b); //returns   | 
        |                  |             |                                         |   -4                |
        |__________________|_____________|_________________________________________|_____________________| 
 
*/
int Bitwise(){
    int a = 6, b = 4;

    // Binary AND operator
    printf("a & b is %d\n", (a & b));

    // Binary OR operator
    printf("a | b is %d\n", (a | b));

    // Binary XOR operator
    printf("a ^ b is %d\n", (a ^ b));

    // Left Shift operator
    printf("a << 1 is %d\n", (a << 1));

    // Right Shift operator
    printf("a >> 1 is %d\n", (a >> 1));

    // One’s Complement operator
    printf("~(a) is %d\n", ~a);

    return 0;
}


/*
    => Assignment Operators
       These operators are used to assign value to a variable. The left side operand of the assignment 
       operator is a variable and the right side operand of the assignment operator is a value. 
       The value on the right side must be of the same data type as the variable on the left side 
       otherwise the compiler will raise an error. 

        __________________________________________________________________________________________________
        |     NAME         |    SYMBOL   |              DESCRIPTION                |       EXAMPLE       |
        |__________________|_____________|_________________________________________|_____________________|
        |   Assignment     |      =      |  Assigns the value on the right to the  |   int a=2           |
        |    operator      |             |  variable on the left.                  |    //a=2            | 
        |__________________|_____________|_________________________________________|_____________________|
        |   Add and        |     +=      |  First adds the current value of the    |   int a=2; b=4;     |
        |   assignment     |             |  variable on left to the value on the   |     a+=b:           | 
        |   operator       |             |  right and then assigns the result to   |    //a=6            |
        |                  |             |  the variable on the left               |                     |
        |__________________|_____________|_________________________________________|_____________________|
        |   Subtract and   |     -=      |  First subtracts the value on the right |   int a=2; b=4;     |
        |   assignment     |             |  from the current value of the variable |     a-=b:           | 
        |   operator       |             |  on left and then assign the result to  |    //a=-4           |
        |                  |             |  the variable on the left               |                     |
        |__________________|_____________|_________________________________________|_____________________|
        |   Multiply and   |     *=      |  First multiplies the value on the right|   int a=2; b=4;     |
        |   assignment     |             |  from the current value of the variable |     a*=b:           | 
        |   operator       |             |  on left and then assign the result to  |    //a=8            |
        |                  |             |  the variable on the left               |                     |
        |__________________|_____________|_________________________________________|_____________________|
        |   Divide and     |     /=      |  First divides the value on the right   |   int a=2; b=4;     |
        |   assignment     |             |  from the current value of the variable |     a/=b:           | 
        |   operator       |             |  on left and then assign the result to  |    //a=2            |
        |                  |             |  the variable on the left               |                     |
        |__________________|_____________|_________________________________________|_____________________| 

*/
int Assignment(){
    int a = 6, b = 4;

    // Assignment Operator
    printf("a = %d\n", a);

    // Add and Assignment Operator
    printf("a += b is %d\n", (a += b));

    // Subtract and Assignment Operator
    printf("a -= b is %d\n", (a -= b));

    // Multiply and Assignment Operator
    printf("a *= b is %d\n", (a *= b));

    // Divide and Assignment Operator
    printf("a /= b is %d\n", (a /= b));

    return 0;
}


/*
    => TERNARY or Conditional Operators(?:):
       This operator returns the value based on the condition. 
       [ Expression1? Expression2: Expression3 ] 
       The ternary operator ? determines the answer on the basis of the evaluation of Expression1. 
       If it is true, then Expression2 gets evaluated and is used as the answer for the expression. 
       If Expression1 is false, then Expression3 gets evaluated and is used as the answer for the expression.

       This operator takes three operands, therefore it is known as a Ternary Operator. 
*/
int Ternary(){
    int a = 3, b = 4;

    // Conditional Operator
    int result = (a < b) ? b : a;
    printf("The greatest number is %d\n", result);

    return 0;
}
