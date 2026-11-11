/***************************************************************** 

    File: lab3main.c

    Author: [Your Name]
    Seneca email: [Your Seneca email address]

    To compile program in codespaces, in terminal pane type:
        gcc -Wall lab3.c lab3main.c
    To run program in codespaces, in terminal pane type:
        ./a.out
        
***************************************************************/
//Uncomment the next line if you are using Visual Studio
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int isLower(char letter);
char toUpper(char letter);
int biggest(int first, int second, int third);
double ticketPrice(int age, int hasCoupon,int dayOfWeek);

int main(void)
{

	//example of how to write a simple tester
	//create variables to store arguments and return values
	int result;
	char letter;

	//set argument to something that will return a true value
	letter = 'a';
	result = isLower(letter);
	printf("isLower(%c) = %d\n",letter, result);


	return 0;
}