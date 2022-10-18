#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/*task1*/

int main(void)
{
	int n;
	int xdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	xdigit = n % 10;
	if (xdigit > 5)
	{
		printf("The last digit of %d is %d and is greater than 5\n", n, xdigit);
	}
	else if(xdigit == 0)
	{
		printf("The last digit of %d is %d and is 0\n", n, xidigt);
	}
	else if(xdigit < 6 && xdigit != 0)
	{
		printf("The last digit of %d is %d and is less than 6 and not 0\n",n,xdigit);
	}
	return(0);

