#include "main.h"
/**
 *print_alphabet - prints alphabet in lowercase then newline
 *
 *Return: 0 on success
 *
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
