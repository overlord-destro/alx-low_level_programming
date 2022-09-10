#include <stdio.h>
/**
 *main - serves as the entry point to the program
 *
 *Return:0 unless error
 *
 */
int main(void)
{
	int i;

	for (i = 'a'; i < 10; i++)
		putchar (i);
	putchar('\n');
	return (0);
}
