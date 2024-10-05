#include <stdio.h>

/*
    In C, an enum (short for enumeration) is a user-defined data type that consists of integral 
    constants. Each constant is given a name, which makes the code more readable. By default, 
    the first enumerator has the value 0, and each subsequent enumerator's value is incremented by one.

    Key Points:
        1. Integral Type: The enumerators are assigned integer values, starting from 0 unless specified 
                          otherwise.
        2. Explicit Values: You can manually assign values to the enumerators.
        3. Underlying Type: The underlying type of enum values is int.
*/


enum Weekday {
    SUNDAY,        // 0
    MONDAY,        // 1
    TUESDAY,       // 2
    WEDNESDAY,     // 3
    THURSDAY = 10, // Explicitly set to 10
    FRIDAY,        // 11 (next value after THURSDAY)
    SATURDAY       // 12
};

int Enum() {
    enum Weekday today = WEDNESDAY;

    printf("Today is day number: %d\n", today);       // Outputs 3

    // Assign an explicit value
    enum Weekday tomorrow = THURSDAY;
    printf("Tomorrow is day number: %d\n", tomorrow);  // Outputs 10

    return 0;
}