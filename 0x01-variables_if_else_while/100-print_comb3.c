#include <stdio.h>
/**
*main - prints out smallest possible combination of 2 digit numbers
*
*Return: 0
*/
int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			if (i >= j)
			{
				continue;
			}
			putchar(i);
			putchar(j);
			if (i == 56 && j == 57)
				break;
			putchar(',');
			putchar(' ');

		}
	}
	putchar('\n');
	return (0);
}

