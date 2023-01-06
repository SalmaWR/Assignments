#include<stdio.h>

void check_alphabet(char alpha);

int main(void)
{
	char alpha;

	printf("please enter a letter: ");
	scanf("%c", &alpha);

	check_alphabet(alpha);
}

void check_alphabet(char alpha)

{
	if (alpha <= 'z'|| alpha <= 'Z')
	{
	printf("%c is an alphabet\n",alpha);
	}
}
