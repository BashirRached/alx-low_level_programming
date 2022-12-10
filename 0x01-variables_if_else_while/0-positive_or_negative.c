#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes thee */

/*betty style doc for function main there */
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX /3;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
