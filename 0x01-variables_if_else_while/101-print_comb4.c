#include <stdio.h>
/**
*main - prints smallest possible combination of 3 digit numbers
*
*Return: always 0
*
*/
int main(void)
{
	int i, j, k;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (k = 48; k < 58; k++)
			{
				if (j >= k || i >= k || i >= k || i >= j)
					continue;
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == 55 && j == 56 && k == 57)
				break;
				putchar(44);
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
