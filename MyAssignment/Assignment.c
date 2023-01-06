#include<stdio.h>

/*
*	Main : Entery point
*	Description : it's a program that convert temperature from degrees
*	Celsius to degrees Fehrenheit
*	return : Always 0 (success)
*/

int main(void)
{
//Variables : Celsius and Fahrenheit
int C; int F;
//get the Celsius degree from the user
printf("Please enter degree:");
scanf("%d", &C);

F = (C * 9 / 5) + 32;
printf("%d degrees Celsius is equal to %d degrees Fahrenheit\n", C, F);

return (0);
}
