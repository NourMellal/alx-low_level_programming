#include <stdio.h>

/**
 * main - function
 *
 * Return: nothing
 */

int main(void)
{
	int count;

	count = 1;
	while (count < 100)
	{
		if (count % 3 == 0 && count % 5 == 0)
			printf("fizzbuzz, ");
		else if (count % 3 == 0)
			printf("fizz, ");
		else if (count % 5 == 0)
			printf("buzz, ");
		else
			printf("%d, ", count);
		count++;
	}
	printf("buzz\n");
}
