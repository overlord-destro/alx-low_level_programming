#include "main.h"
/**
*_atoi - converts string to integer
*@s: string to be converted
*
*Return: returns an integer
*
*/
int _atoi(char *s)
{
	int i, j, n, x;

	i = 0;
	n = 0;
	x = 1;

	while ((s[i] < '0' || s[i] > '9') && (s[i] != '\0'))
	{
		if (s[i] == '-')
			x *= -1;
		i++;
	}
	j = i;
	while ((s[j] >= '0') && (s[j] <= '9'))
	{
		n = (n * 10) + x * ((s[j]) - '0');
		j++;
	}
	return (n);
}
