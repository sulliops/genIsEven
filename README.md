# genIsEven
The most inefficient way to check if a number is even (updated with a C++ variant of the program).

## Purpose
This program (`genIsEven.c`/`genIsEven.cpp`), when compiled and run, generates a new C/C++ program (`isEven.c`/`isEven.cpp`) full of if/else if statements that check a supplied value against every possible even number between 0 and the number supplied by the user (maximum of 18,446,744,073,709,551,615).

Theoretically, a total of 9.22337203 x 10^18 if/else if statements could be generated. One only needs to change the value of `maxEvenNumber`/`maxNumber` to whatever maximum they choose (the variable name depends on the C or C++ variant of the program).

## Warning
Seriously, do not **ever** run the generated code with large values. To process that number could wreck a computer. 

I am not liable for any damage caused by running this program.
