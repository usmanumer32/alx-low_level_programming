#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main function is the entry
 * point of every c program
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n",n);
	}
	if (n == 0)
	{
		printf("%d is zero\n",n);
	}
	if (n < 0)
	{
		printf("%d is negative\n",n);
	}
	return (0);
}
