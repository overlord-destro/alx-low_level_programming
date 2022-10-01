#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
*main - adds 2 numbers
*@argc: number of CL argumennts
*@argv: argument array
*Return: 0 unless error
*
*/
int main(int argc, char *argv[])
{
	int i, j, add;

	add = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", add);
	return (0);
}
