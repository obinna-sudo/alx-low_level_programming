#include <stdlib.h>
#include <time.h>
/* 
 * main - Program that compares postivity and neagtivity of a number 
 * Return: Always 0
 */
int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		print("%d is zero\n", n);
	}
	else
		print("%d is negative\n", n);

	return (0);
}
