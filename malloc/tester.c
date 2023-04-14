#include<stdio.h>
#include<stdlib.h>
#include"header.h"
/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *buffer;

    buffer = create_array(0, 'h');
    
    {
        printf(" this is fun %s\n", buffer);
        return 0;
    }
}
