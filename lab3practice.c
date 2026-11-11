/***************************************************************** 

    File: lab3practice.c

    Author: [Your Name]
    Seneca email: [Your Seneca email address]

    To compile program in codespaces, in terminal pane type:
        gcc -Wall lab3practice.c lab3main.c
    To run program in codespaces, in terminal pane type:
        ./a.out
        
***************************************************************/
//Uncomment the next line if you are using Visual Studio
//#define _CRT_SECURE_NO_WARNINGS

/*
This function is passed a number that can be positive or negative.  
If the number is positive, function returns the number.
If the number is negative, function returns the positive version of that number
*/
int absoluteValue(int number);
/*
This function is passed two numbers representing what each player "threw" in a game 
of rock-paper-scissors. This function returns 1 if player won the game, 0 if they 
either tied or lost the game
*/
int rockPaperScissors(int player, int opponent);

/*
This function returns the day of the week represented as follows:
0 - Sunday
1 - Monday
2 - Tuesday
...
6 - Saturday

January 1 2025 occurred on a Wednesday.  Given a number representing the day 
of the month in January, function returns the day of the week.  If day is invalid, 
function returns -1:
*/
int dayOfWeekJan2025(int day);

