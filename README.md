# genIsEven
The most inefficient way to check if a number is even.

## Purpose
This program (genIsEven.c), when compiled and run, generates a new C program (`isEven.c`) full of if/else if statements that check a supplied value against every possible even number between 0 and the number supplied by the user (maximum of 18,446,744,073,709,551,615).

Theoretically, a total of 9.22337203 x 10^18 if/else if statements could be generated. One only needs to change the value of `maxEvenNumber` to whatever maximum they choose.

## Warning
Seriously, do not **ever** run the generating code with large values. To process that number could wreck a computer. 

I am not liable for any damage caused by running this program.
