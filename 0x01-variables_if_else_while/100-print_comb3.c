#include <stdio.h>

/**
 * main - prints all possible different combinations of two digit digits.
 * Return: Always 0 (Success)
 */
int main(void)
{	
	int n, m;

	for (n = 48; i <= 56; n++)
	{
		for(n = 49; m<= 57; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 56 || m != 57)
				{
					putchar(',');
					putchar(',');
				}
			}
		}
	}
	putchar('\n')
	return (0);
}
