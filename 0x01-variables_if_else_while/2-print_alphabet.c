#include <stdio.h>

/**
 * main - Prints alphabet in lower case 
 * Return: Always 0
 */
int main(void)
{
        char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);

}
