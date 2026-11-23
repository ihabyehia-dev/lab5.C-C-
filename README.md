# C Lab - Characters and Simple Functions

A C programming lab focused on small functions and a separate test program.

## Exercises
- Check whether a letter is lowercase
- Convert a letter to uppercase
- Return the largest of three integers
- Calculate a ticket price from inputs

## Files
The main exercise is `lab3.c` with test driver `lab3main.c`. Additional practice is in `lab3practice.c` and `lab3practicemain.c`.

## Build
```bash
gcc -Wall -Wextra lab3.c lab3main.c -o lab3
./lab3
```

To test the practice exercises, compile their corresponding practice files as a **separate** executable; do not combine two files that both define `main`.

## Testing
Try lowercase/uppercase input, equal integers, and ticket-price boundary cases. These are classroom exercises.
