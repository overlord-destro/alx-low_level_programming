#include "main.h"
/**
 *print_alphabet_x10 - prints alphabet in lowercase 10 times then newline
 *
 *Return: 0 on success
 *
 */
void print_alphabet_x10(void)
{
	int i;
	int count = 0;

	while (count < 10)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
		putchar('\n');
		count++
	}
}
