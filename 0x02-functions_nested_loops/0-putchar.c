#include "main.h"
/**
 *main - prints _putchar followed by new line
 *
 *
 *Return:0
 *
 */
int main(void)
{
	int charray[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(charray[i]);
	}
	_putchar('\n');
	return (0);
}
