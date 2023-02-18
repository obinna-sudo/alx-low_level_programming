#include <stdio.h>
/**
 * main - Prints alphabet in reverse order 
 * Return: Always 0
 */
int main(void)
{
	char lc;

	for (lc = 'z'; lc <= 'a'; lc--)
		putchar(lc);

	putchar('\n');

	return (0);
}
