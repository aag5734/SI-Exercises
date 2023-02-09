# Pointers, Memory, and Processes 

There'll be a lot of topics to cover this session. It should be pretty chill though.

## MAIN CONCEPTS

- Process Lifecycle
    - ![Processes](/assets/processlifecycle.png)
    - From Running to Ready
        - CPU caps the amount of time a process can run.
    - From Ready to Running
        - The processor is chosen by the CPU and executes it. Typically, right after __new__ state. 

- Virtual Memory vs Physical Memory
    - VM is a subspace of PM
    - When does the OS bind VM to the PM
        - **COMPILE TIME**
            - Compiler translates source to determine the VM at which some value will be located and loaded.
        - **LOAD TIME**
            - OS chooses an address when it loads the program into memory.
        - **EXECUTION TIME**
            - OS chooses a physical address during execution, maps to a virtual address in the Heap, and can change it during execution.
    - Virtual Memory
        - 5 Components
            - ![VirtualMemory](/assets/virtualmemorydiagram.png)
                - **TEXT**
                - **DATA**
                - **BSS**
                - **HEAP**
                - **STACK**
                
- Pointers
    - int * ptr;
    - *ptr = 2;	OR	ptr = &var
    - printf(“%d\n, *ptr)
    - Aliasing
        - Two pointers pointing to the same thing


## SESSION ACTIVITIES   

### Birds 

Spend five minutes drawing birds on the whiteboard and just catching up with students. 


### Process Life Cycle

As the title suggests, spend around 10-ish minutes completing the life cycle diagram from lecture using a word bank.
 
**WORD BANK:**
- Ready
- Terminated
- New
- Waiting
- Running
- Spawn
- I/O Done
- Doing I/O
- Dispatch
- Timeout
- Acquire Memory
- Exit
- Release Resources

Once they’re done with this, make a simple program that asks for some input. I was planning on making a program that did the sum of two numbers but you can really do whatever you want here. Go through the execution of this program and have students answer which state the process is in line by line.

{
int main() {
    int a, b;
   
      printf("Enter first number: ");
      scanf("%d", &a);
   
      printf("Enter second number: ");
      scanf("%d", &b);
   
      printf("A : %d \t B : %d" ,
            a , b);
   
    return 0;
}
}

(Literally just got this from GeeksForGeeks)


### Virtual vs Physical Memory

Start this section of the session by asking what the students remember about VM and PM, if anything at all. Have the knowledgeable students start us off by writing out a physical representation of how the PM relates to the VM. Once this is done, go further and have students answer the question: What are the five components to the VM. Once this is done, have a random students (preferably one who hasn’t gone up yet) to write out the different segments of the VM. If they get it wrong, have knowledgeable students make suggestions, but don’t have them write up the answer. 


### Messing with Pointers

Spend the remaining time just doing quick little activities involving pointers.

Using pointer.c, students try to guess what each comparison in each code snippet returns. Run the program and try to have others explain where they went wrong.


### Study Guide

Add onto the study guide and answer any questions students may have.