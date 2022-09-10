#include <stdio.h>
/**
 *main - serves as the entry point to the program
 *
 *Return:0 unless error
 *
 */
int main(void)
{
	char alph[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
	int i = 0;

	for (; i < 52; i++)
		putchar (alph[i]);
	putchar('\n');
	return (0);
}
