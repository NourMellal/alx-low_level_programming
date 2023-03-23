#include "main.h"

/**
 * more_numbers - check the code
 *
 * Return: nothing
 */

void more_numbers(void)
{
int line;

	for (line = 0; line <= 9; line++)
	{
		int num;

		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar (num / 10 + 48);
			}
			_putchar (num % 10 + 48);
		}
		_putchar('\n');
	}
}
