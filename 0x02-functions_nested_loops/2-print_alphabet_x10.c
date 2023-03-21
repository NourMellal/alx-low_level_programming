#include "main.h"
/**
 * print_alphabet_x10 - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char line;

	for (line = 0; line <= 9; line++)
	{
		char letter = 'a';

		while (letter != 'z' + 1)
		{
			_putchar (letter);
			letter++;
		}
		_putchar('\n');
	}
}
