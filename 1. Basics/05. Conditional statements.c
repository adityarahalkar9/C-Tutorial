#include <stdio.h>

/*
    - if statement:
        The if statement is the most basic conditional statement. It allows you to execute 
        a block of code only if a specified condition is true.
    - else statement:
        The else statement is often used in conjunction with the if statement. It provides 
        an alternative block of code to be executed when the condition in the if statement is false.
    - else if statement:
        The else if statement allows you to test multiple conditions one after another. It is 
        used when you have more than two possible outcomes.
*/

void Conditions() {
	int age = 23;
	if (age < 18) {
		printf("Not an adult");
	}
	else if (age>= 18) {
		printf("Adult");
	}
	else {
		printf("Invalid input");
	}
}