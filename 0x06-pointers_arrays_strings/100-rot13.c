#include "main.h"
/**
 * rot13 - enoding rot13
 * @s: string
 * Return: string
 */

char *rot13(char *s)
{
	int i, j;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if s(s[i] == a[j])
			{
				s[i] = b[j];
				break;
			}
		}
	}
	return (s);
}

