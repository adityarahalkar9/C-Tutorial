/*
    Summary of the static Keyword:
    1. Local Variables	   - Lifetime extended to the entire program, but scope limited to the function 
                             or block.
    2. Global Variables	   - Limits scope to the file where it is declared, making it inaccessible to 
                             other files.
    3. Functions	       - Limits the visibility of the function to the file where it is declared 
                             (internal linkage).
    4. Function Parameters - Specifies that the array being passed must have a minimum size (optimization hint).

    Practical Use Cases:
    1. Static Local Variables            : Useful in functions that need to retain information between 
                                           calls (e.g., counters, stateful operations).
    2. Static Global Variables/Functions : Helps in encapsulating logic and data within a single file, 
                                           promoting modularity and preventing naming conflicts with other files.
    3. Static in Function Parameters     : Provides optimization opportunities for the compiler by ensuring 
                                           certain constraints on array sizes.
                                           
    By using static judiciously, you can control the visibility and lifetime of variables and functions, 
    making your C programs more efficient, modular, and safe from potential conflicts.
*/