#include"Get_Max.h"
#include<stdio.h>
int main(void)

{

int x , y;
int Maximum; 
	printf("please enter the frist number:");
	scanf("%d",&x);
	printf("please enter the second number:");
	scanf("%d",&y);
	
	Maximum = Get_Max(x,y);
	printf ("the maximum value is %d\n", Maximum);
}
