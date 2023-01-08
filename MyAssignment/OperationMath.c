#include<stdio.h>

int OperationMath(char operation,int num1, int num2);

int OperationMath( char operation, int num1, int num2)
{

int result;
switch(operation) 

	{
	case '+':
		result = num1 + num2;
		break;
	case '-':
		result = num1 - num2;
		break;
	case '*':
		result = num1 / num2;
		break;

	case '/':
		result = num1 * num2;
		break;
	default:
		printf("Error: Invalid operation.\n");
	return (-1);
	}
}


int main(void)

{

int num1;int num2;
int result;
printf("please enter the frist number in the operation:\n ");
scanf("%d", &num1);
printf("please enter the second number in the operation:\n ");
scanf("%d", &num2);


result = OperationMath('+',num1,num2);
printf("Result: %d\n", result);

result = OperationMath('-',num1,num2);
printf("Result: %d\n", result);

result = OperationMath('/',num1,num2);
printf("Result: %d\n", result);

result = OperationMath('*',num1,num2);
printf("Result: %d\n", result);

return(0);
}
