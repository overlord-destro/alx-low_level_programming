#include <stdio.h>
/**
 *main - serves as the entry point to the program
 *
 *Return:0 unless error
 *
 */
int main(void)
{
	char alph;

	for (alph = 'z'; alph >= 'a'; alph--)
		putchar (alph);
	putchar('\n');
	return (0);
}
