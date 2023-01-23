# C For Dummies

Welcome to the first week of SI! This week will overall be pretty chill considering we haven't
done much in the way of learning C, but we will go over what little we've learned!

## MAIN CONCEPTS

### Coding in C and Translation
- How to make a main function. How to get command line arguments.
- The different phases of translation from C file to executable
- PCAL 
    - **P** Preprocessor 
    - **C** Compiler
    - **A** Assembler
    - **L** Linker

## Program Translation

Go over the four stages of translation, what comes out of each of them, and what they do exactly.

C file -> **(Preprocessor)** -> C file -> **(Compiler)** -> Object File -> **(Assembler)** -> Assembly -> **(Linker)** -> Executable

## Whiteboard Coding

Have students choose between two programs they can implement. One that just calculates the factorial of some number n, and another that calculates the final calculated grade of a student given past exam scores. 

A few things to tips to give students:
- Remember to include the standard libraries.
- int main (int argc, char * argv[])
- Use atoi to convert from string to ints

## Compile a Program

Using what we've learned, try to compile and run the programs on the whiteboard using the flags that we learned in class. 
It should look something similar to this:

**gcc -std=c99 -Wall -Wextra -pedantic -ggdb -c file.c**
**gcc file.c -o file.o**
**./file args**