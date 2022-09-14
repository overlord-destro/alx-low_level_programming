#include <stdio.h>
/**
*main - this function computes the sum of 3 and 5 multiples below 1024
*
*Return: 0
*
*/
int main(void)
{
	int charray[1024], int i, int k, int sum = 0;

	for (i = 0; i < 1025; i++)
	{
		if (i % 3 == 0)
		{
			charray[i] = i;
		}
		else if (i % 5 == 0)
		{
			charray[i] = i;
		}
	}
	for (k = 1; k < 1025; k++)
	{
		if (k % 3 == 0)
		{
			sum += charray[k];
		}
		else if (k % 5 == 0)
		{
			sum += charray[k];
		}
	}
	printf("%d\n", sum);
	return (0);
}
