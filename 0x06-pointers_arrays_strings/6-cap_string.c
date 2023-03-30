#include "main.h"
/**
 * cap_string -  function that capitalizes all words of a string.
 * @s : the string
 * Return: uppercase string
*/

char *cap_string(char *s)
{
	int i, j;

	char spe[13] = {20, 9, '\n', 28, 92, 125, 123, 46, 34, 33, 63, 59, 32};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;

		for (j = 0; j < 13; j++)
		{
			if (s[i] == spe[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] -= 32;
				}
			}
		}
	}
	return (s);
}
