#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c='a';
	char C='A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
		
	}
	while (C <= 'Z')
	{
		putchar(C);
		c++;
	}
	putchar('\n');

	return (0);
}
