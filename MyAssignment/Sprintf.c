#include<stdio.h>
#include<stdarg.h>
#include<unistd.h>
#include<string.h>
#include"main.h"

/**
*Description: _printf - prints variable argements : a string is in a formatted way
*	@format: string to print (char*)
*	@  the  ... : variadic parameters
*
*	Return: number of characters printed
*/

int _printf(const char *format, ...) 

{
/*I is the index of the array of the string format[i]*/
int i = 0;
/*varibale to keep track of the number of characters printed.*/
int count = 0;
/*va_list, va_arg ... :bcs I will treated with variable arguments*/
va_list args;
/*The frist arguement is the last named argument of the function (in this case, "format") 
*The second argument is the type of the argument to be retrieved. the argument is of type "int , char ...".
*/
va_start(args, format);
/* for loop: iterates through each character of the format string.*/
	for (int i = 0; format[i] != '\0'; i++)
{
/*the character is a '%' character the code enters a switch statement*/
		if (format[i] == '%')
		/*to check the datatype following character*/
	{
			i++;
			switch (format[i])
		{
		/*character*/
			case 'c':{ 
			char c = va_arg(args,int);
			write(1, &c, 1);
			count++;
			break;
			}

		/*string*/
			case 's':
			{
			char *s = va_arg(args,char*);
			int len = strlen(s);
			write(1, &s, len);
			count += len;
			break;
			}
		/*write % char */
			case '%':
			{
			write(1,&format[i],1);
			count++;
			break;
			}
		/*to print normal character*/
			default:
			{
			write(1,&format[i],1);
			count++;
			}

		}
	}else{
		write(1,&format[i],1);
		count++;
		}

		i++;
}

va_end(args);
return count;
}
