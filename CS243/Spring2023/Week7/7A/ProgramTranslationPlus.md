# Advanced Program Translation 

Most of this session will consist of conceptual stuff with some coding at the end.

## MAIN CONCEPTS

- Program Translation (in depth)
    - Compiler-Assemble-Link (Operation Summary)
        - The preprocessor performs text replacement.
        - Compiler top half
            - Scanner produces token sequence.
            - Parser produces parse tree + symbol table.
            - Semantic analysis produces intermediate language.
        - Compiler bottom half
            - Code generation to create assembly source.
        - Assembler translates object module. 
        - Linker adds code to resolve all references and make an object Load Module
- Object binaries
    - Linux uses ELF (Executable and Linking Format)  
    - ![ELFFormat](/assets/ELFObjectModule.png)
- Libraries
    - An archive file of relocatable object files concatenated into one file



## SESSION ACTIVITIES   

### Birds 

I’m going to try doing birds again even though I already did it last time. Should take 5-ish minutes.


### Program Translation

This section will be a bloated one, as we’ll be going over everything, we learned about program translation from the previous lecture.


**Compiler--LinkerAssembler**


Start off by asking students what the correct order of translation in C is (PCAL). 

Next, write out a visual representation of the compiler and its top/bottom half. For each half, have one student write out what it does in the empty box.

Before we get to the next section of program translation, ask students what each other section of program translation is responsible for (refer to notes)


**Object Binaries**


Given a list of different object binaries, have students quietly think to themselves which object binary format the CS machines use.

Readelf, Nm, **ELF**, Objdump, elfedit 

Next, write out an empty version of the table in the notes alongside a word bank with the sections. Have students work together to try to find out which section goes. After their first attempt, erase the parts they got wrong. If by their second attempt they still have some sections wrong, have them look through their notes. 


**Libraries**


This will be the quickest subsection. Just ask one random student what an archive file is and file extension (.a).



### Leetcode

Spend the remaining time on a leetcode question of the students’ choice.


**Longest Substring w/o Repeat Chars**


Given some string ‘s’, find the length of the largest substring without repeating characters. 

- Input: *s = abcabcbb*
- Output: *3 (“abc”)*
- Input: *pwwkew*
- Output: *3 (“kew”)*

*int lengthOfLongestSubstring(char * s)*


**Reverse Integer**

Given the head of a linked list, remove the nth node from the end of the list and return its head.

- Input: *head = [1,2,3,4,5], n = 2*
- Output: *[1,2,3,5]*
- Input: *head = [1], n = 1*
- Output: *[]*
- Input: *head = [1,2], n = 1*
- Output: *[1]*


*struct ListNode removeNthFromEnd(struct ListNode head, int n)*
- Note, listnode should be a pointer


**Remove nth node from a Linked List**


Given a signed 32-bit integer x, return x with its digits reversed. 

- Input: *x = 123*
- Output: *321*
- Input: *x = -123*
- Output: *-321*
- Input: *x = 120*
- Output: *21*

*int reverse(int x)*


### Study Guide

Add onto the study guide and answer any questions students may have.