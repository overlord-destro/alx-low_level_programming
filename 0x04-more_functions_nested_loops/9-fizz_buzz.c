#include <stdio.h>
/**
*main - fizzbuzz test for multiples of 3 and 5
*
*Return: 0
*
*
*/
int main(void)
{
	int i = 1;

	for (i = 1; i < 101; i++)
	{
		if ((i % 5) == 0 && (i % 3) == 0)
			printf("FizzBuzz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else
			print("%d ", i);
	}
	putchar('\n');

	return (0);
}
