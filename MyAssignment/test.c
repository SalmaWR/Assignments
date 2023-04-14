#include<stdio.h>


int mina( int x, int y);


int mina( int x, int y)
{

int sum = x+y ;

return sum;

}


int main()

{
int x = 5;
int y = 10;

int sum = mina(x,y);

printf("%d\n",sum);
}

























