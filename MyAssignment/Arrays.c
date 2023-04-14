#include<stdio.h>

/*
* Description : Test 
*
*/
int main(void)
{
//How to itialize an Array at Declaration?
//type ArrayName [size] = {item, ..., ..., ...}; 
int x;

for (x = 0 ; x < 5 ; x++)
{
	int iarray [5];
	iarray[x] = x + 5;
 	printf ("iarray[%d] = %d\n", x, iarray[x]);
}
return 0;
}
