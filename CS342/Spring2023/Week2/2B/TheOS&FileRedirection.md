# The OS and File Redirection

This session will focus on the OS and its components. It will also focus on file redirection to standard input, a concept
present in this week's homework assignment.

## MAIN CONCEPTS

- Redirecting content from a file using the ‘<’ keyword
- EOF (\0)
- What argc and argv do/contain
- ![OS Diagram](/assets/TheOS.png)	 
    - Registers = Where data is stored. Fastest memory access
    - ALU = Where data is manipulated
    - Control Unit = Tells ALU what data to manipulate
    - RAM (Random Access Memory) = Where data is initially stored, slower than using registers
    - Controllers = The I/O devices used to communicate with the CPU and Memory
- The sizeof() operator
- The stack = Where local memory is stored
- How strings work in C

## SESSION ACTIVITIES   


### Greetings and Translation
Spend the first five minutes greeting people who didn’t show up to the first session.

Afterwards, have students quickly go over the translation process and what each phase generates. 
(See week 2A for answers). If they finish early, you could also go over the parameters in main 
(argc and argv) and what they contain. (Note: Talking about argv could be a good segway into how 
strings work in C)


### Experimenting with sizeof()

The first activity will involve students to match some variable declarations with the proper number of bytes.

**KEY:**
- **int x; 4**
- **int y[10]; 40**
- **int * ptr; 8**
- **char c; 4**
- **long int z; 8**
- **short int o; 2**
- **char * string = “Hello”; 8**


### Writing out the OS and its Components

Using the diagram above, erase the components and have students fill in the blank. Since this is still week 2, 
provide them a word bank. Once they’ve completed the exercise, go over what each component does as a group 
(refer to the writeup). You could also use this section of the session to segway into the stack since that’s a 
pretty important topic to cover.


### Compile a Program

I tried making a program that was similar but not identical to their current homework assignment. In this activity, 
have students group up in pairs to work on the Replacer program. This program should take in two words and a file. 
The first word should be what we’re looking for, and the second word should be the word that we want to replace it 
with. The program should replace each of the words and output the sentence on stdout. 

E.g. 
“My name is Mark”
./replacer Mark James < words.txt
“My name is James” 

