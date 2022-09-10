#include <stdio.h>
/**
 *main - serves as the entry point to the program
 *
 *Return:0 unless error
 *
 */
int main(void)
{
	char alph[52] = "abcdfghijklmnoprstuvwixyz";
	int i;

	for (i = 0; i < 24; i++)
		putchar (alph[i]);
	putchar('\n');
	return (0);
}
