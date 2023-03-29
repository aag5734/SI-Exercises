# Enums and Bits

Guess who's back. This session will focus on Enums (how to use and why we use them) as well
as bits (Nybbles and how to convert them to/from hex and decimals)

## MAIN CONCEPTS

- Unions
    - How they’re made/stored
    - Size = longest data type
    - Good for when you want either or
    - Drawing diagrams
    - Don’t assume where each data type goes

- Big/Little Endian
    - BE
        - “Big end” (the most significant value is stored first. The opposite in LE)
    - CS Systems use Little Endian

- Enums
    - Default (0,1,…,n-1)
    - Possible to have dupe values
    - Handy for multiple cases (SWITCH)
- Binary Bits
    - Signed decimal
        - ~1100 => 0011 + 1 = 0100
    - Converting Hex to Decimal
        - 0xF0123456
        - 0x(F0)(12)(34)(56)
        - F0 = 11110000
        - 12 = 00010010
        - 34 = 00110100
        - 56 = 01010111

## SESSION ACTIVITIES   


### Wordle 

Spend the first few minutes going through a game of wordle. Should take about 5 minutes

### Nybbles


Following up from last lecture, spend 5-10 minutes to complete the Nybble/Hex Table. Begin by asking what they remember about Nybbles. If they don’t know how to convert a Nybble to a signed decimal, write the formula on the board

- ![Nybbles](/assets/nybbletable.png)


### ToDo List (Using an Enum)

Create a ToDo program that supports the following operations: ADD x, DEL y, CLEAR, UPDATE x y, and EXIT

Students should make use of Enums to help them determine what operations to complete. They should also follow make sure no memory is leaked upon termination.

For the sake of simplicity, students can assume that entries are one whole word


### Study Guide

Spend the remaining time adding stuff to the study guide.