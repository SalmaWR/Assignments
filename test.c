#include<stdio.h>
#include<stddef.h>
#include<string.h>
/**
*  _strcmp - Function which compare two strings and
*@s1: first string
*@s2:second string
*Return:
*		returns zero if s1 == s2
*		returns negative number if s1 < s2
*		returns positive number if s1 > s2
*/


int _strcmp(char *s1, char *s2);

int _strcmp(char *s1, char *s2)
{
	int i = 0, diff = 0;

	while (1)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			break;
		else if (s1[i] == '\0')
		{
			diff = s2[i];
			break;
		}
		else if (s2[i] == '\0')
		{
			diff = s1[i];
			break;
		}
		else if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}
		else
			i++;

	}
	return (diff);
}

int main()
{
char array1[20]="SALMA IS HAPPY!";

char array2[20]="SALMA";


size_t lengthArray1 = strlen(array1);
size_t lengthArray2 = strlen(array2);

size_t diff = strlen(array1) - strlen(array2);
printf("the diffrence is %ld\n", diff);

}
