# Review with Scheduling and Security

This week was very concept heavy so there's no coding exercises planned
for this session.

Instead, refer to the activities writeup below for ideas on what to do 
for scheduling.

## MAIN CONCEPTS

### Scheduling
- Process Algorithms:
    - FIFO/FCFS
        - Jobs run in order of arrival
        - FIFO = First in first out   
        - Know how to make a ready queue, gannet chart, turnaround, response, waiting times
            - (image goes here)
    - SJF/SJN
        - Shortest job first / shortest job next
        - Know the reason why we use it
            - **ANSWER:  It gives the best average wait times of any algorithm**
        - Know the problem with it
            - **ANSWER: Biased against long jobs, even worse when we have a lot of short jobs**
    - So the problem with scheduling is that these algorithms require the knowledge of runtime. How do we negate this issue?
        - **ANSWER: Share the CPU among all the ready processes!**
- CPU
    - Know about quantums
        - An interval timer that signals the processor at a specific time interval. Used to schedule processes.
    - Know when it preempts
        - Process blocks for I/O
        - Process suspends itself (AKA sleep)
        - Quantum is used up
        - etc
    - The Pros and Cons to CPU sharing
        - **Higher average turnaround time, but an even better response time**

- Preemptive Algorithms
    - Round Robin (RR)
        - Distributes CPU time evenly 
        - Know when it preempts
            - Quantum expires 
            - Process blocks for I/O
            - Process suspends itself

- Context Switch Times 
    - Basically a little quantum between processes 
- Know about priorities
    - Internal, External, Static, Dynamic
- Dynamic and Static Quantums
    - Static
        - Quantum determined when the process gets feed into the systems
    - Dynamic
        - Quantum can change during the lifetime of process 

### Security

- Security
    - What is the goal of protection?
        - **ANSWER: It prevents programs and users from accessing/changing stuff they shouldn’t**
    - Why are buffer overflows so dangerous?
        - **ANSWER: It overwrites whatever comes after it, this can be dangerous if it’s, say, right next to some passwords in memory**


## Birds and Catching Up

Use the first five minutes of the session to draw a few birds on the board. 

It went well last time when I had one person in the session so I’m hoping that more students will show up so that the activity can be more fun. 

Also spend this time just catching up with students.
ie. Ask them about their progress on the project/homework, how they’re feeling about the final, etc.


## Scheduling Review

Review the basics of scheduling processes, refer to the writeup above for major topics up until dynamic and static quantums

To show how quantums and processes are done, I will act as the processor with the students acting as a process that wants to get executed.

I will assign each student with some random runtime (12, 4, 87, etc)

For starters, I’ll give them an example of a processor that takes in processes by FIFO (refer to writeup) by lining students up in a line

Repeat this with SJF/SJN

Now we want to demonstrate static and dynamic quantums. We’ll do this pretty similarly to the last demonstration.

For static quantums, I’ll just assign some quantum to the first process in line. 

For dynamic quantums, have students take a random number of markers from the board. I will give the student with the greatest number of markers a better quantum than those who give less. 

Hopefully this fun activity gives students a clearer view on what is (in my opinion) a more difficult subject.
