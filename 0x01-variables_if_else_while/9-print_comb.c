#include <stdio.h>
/**
 *main - prints outs a combination of single digit numbers in ascending order
 *
 *Return:0 unless error
 *
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar ((i % 10) + '0');
		if (((i % 10) + '0') == '9')
			break;
		putchar (',');
		putchar (' ');
	}
	putchar ('\n');
	return (0);
}
