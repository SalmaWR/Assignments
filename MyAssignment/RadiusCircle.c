#include<stdio.h>

/*
*	Description:  program that reads the radius of a circle and
*	calculates the area and circumference then prints the
*	results.
*/

int main(void)
{
//Variables : The radius of the circle - the area - circumference 
int Radius;
int Area;
int Circumference;
float π = 3.14159;
//input: Read the radius - from user -
printf("The radius of the circle is:");
scanf("%d", &Radius);
//Calculate the area : π * (radius*radius)
Area = (π * (Radius * Radius));
//print the result 
printf("The Area of the circle is : %d\n", Area);
//Calculate the circumference : C=2πr
Circumference = (2 * π * Radius);
//print the result
printf("The circumference of the circle is : %d\n", Circumference);
}
