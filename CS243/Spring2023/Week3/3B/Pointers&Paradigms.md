# Pointers, Paradigms, and Strings 

Lots of stuff to be covered. Mostly conceptual things though.

## MAIN CONCEPTS

- Strings in C
- Paradigms
    - OO
        - A coding language that’s able to define objects and their associated procedures.
        - Ex: Java, C, Lisp
    - Imperative
        - A coding language that consists mainly of a series of commands 
        -  Ex: C, Fortran, Assembly
    - Functional
        - Languages that are specifically designed to handle symbolic computation and list processing applications.
        - Ex: Scheme
    - Scripting
        - A language that employs a high-level construct to interpret and execute one command at a time 
        - Ex: Python, Bash, Perl
    - Pointers
- How to create a pointer
    - Ex: int x = 23, int * ptr = &x
    - Dereferencing a pointer and int
        - int x, &x  Returns the address of ‘x’
        - int * ptr, &ptr  Returns what’s at the address
    - Manipulating the pointer
        - Int data[3] = [1, 2, 3]
        - Int * ptr = data
        - Printf(“%d\n”, &(ptr + 1))
- Structures 
    - How the size of a struct is determined
    - Visualizing the storage of a struct
    - Order matters!


## SESSION ACTIVITIES   

### Wordle

Since we didn’t get the time to play wordle last session, I thought it would be a waste not to do it. Spend 
around 5-ish minutes here.


### Lightning Review

(Refer to the right up above)

- STRINGS:
    - For this portion of the review, give the student some random string and have them draw a memory diagram from it. If they don't know what that is, start off the table with “Char” and “Memory” cells to the left hand side.

- PARADIGMS:
    - Ask students what each of the 4 main paradigms are and to give an example of them. You can challenge them by asking what each sets them apart and then write down the answer on the board.

- POINTERS:
    - Have them create a pointer of type int that points to an int x. Then have them print out that same value using only the pointer. Additionally, have them print out the third entry of some int array data[3] = [1, 5, 9] using only the fact that int * ptr = data.



### Structures Review + Programming Assignment

Before you begin the coding assignment, give a quick refresher on structs in C. Ask students what structs are in C and give them 2 examples of different implementations of the same struct. Ask them what differences, if any, they have to each other. Afterwards, show a memory diagram showing the size of each of the structs. You can use the following structs if it helps:

- struct s1 {
    - void * p;
    - int x;
    - int y;
    - int z;
    - short c;

- struct s2 {
    - short c;
    - void * ptr;
    - int x;
    - int z;
    - int y;

sizeof(s1) = 24;
sizeof(s2) = 32;

After that, you can begin the programming assignment.

Given a file “students.txt”, read the file and create an array of structs Student that holds the student’s name, grade, and age. 


### Study Guide

Add onto the study guide and answer any questions students may have.