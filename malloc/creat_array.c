#include<stdio.h>
#include<stdlib.h>
#include"header.h"

char *create_array(unsigned int size, char c)

{

char *ptr = (char*) malloc(sizeof(char)* size);

unsigned int i = 0;

if(size == 0)
{
	return(NULL);
}


else if( !ptr || ptr == NULL)
{
	return (0);
}


else if(size > i)
{
	*(ptr + i) = c;
	i++;
}

*(ptr + i) = '\0';
return ptr;
}
