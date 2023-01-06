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
	if ((alpha >= 65 && alpha <= 90)||(alpha >= 97 && alpha <= 122))
	{
	printf("%c is an alphabet\n",alpha);
	}
	else 
	{
	printf("%c is not an alphabet\n",alpha);
	}

}
