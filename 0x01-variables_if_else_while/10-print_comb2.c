#include <stdio.h>

/**
 * main - Entry point
 * Desc: Entry
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b = 00;

	while (b <= 999)
	{
		putchar(b / 100 + '0');
		putchar(b % 100 + '0');
		b++;
		if (b != 100)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
