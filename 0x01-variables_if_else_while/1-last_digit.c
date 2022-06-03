#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * Main - maib block
 * Description: prints the last digit of a number if its greater
 * than 5, zero or 6
 * return: 0
 */
int main(void)
{
	int n;
	int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;

	if (lastdigit > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, lastdigit);
	else if (last == 0)
		printf("Last digit of %i is %i and is 0\n", n, lastdigit);
	else if (last < 6)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, lastdigit);

	return (0);
}
