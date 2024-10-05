#include<stdio.h>

/*
    The "break" statement works similarly to other programming languages in C programming. 
    A control flow statement is used to exit a loop or switch statement early when a specific 
    condition is met.
*/
void Break()  {  
    int i;  
    for(i = 0; i<10; i++){  
        printf("%d ",i);  
        if(i == 5)  
        break;  
    }  
    printf("came outside of loop i = %d",i);     
}

/*
    The continue statement in C language is used to bring the program control to the beginning of the 
    loop. The continue statement skips some lines of code inside the loop and continues with the 
    next iteration. It is mainly used for a condition so that we can skip some code for a particular condition.
*/
void Continue(){  
    int i=1;   
    for(i=1;i<=10;i++){      
        if(i==5){//if value of i is equal to 5, it will continue the loop    
            continue;    
        }    
    printf("%d \n",i);    
    } 
} 

/*
    The goto statement is known as jump statement in C. As the name suggests, goto is used to transfer 
    the program control to a predefined label. The goto statment can be used to repeat some part of the 
    code for a particular condition. It can also be used to break the multiple loops which can't be done
    by using a single break statement.
*/
void Goto(){  
    int num, i = 1;   
    printf("Enter the number whose table you want to print: ");   
    scanf("%d", &num);
    table:   
        printf("%d x %d = %d\n", num, i, num * i);  
        i++;  
        if (i <= 10)  
            goto table;
}