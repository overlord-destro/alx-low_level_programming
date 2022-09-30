#include <stdio.h>
#include <stdlib.h>
/**
*main - prints out the value of the multiplication of 2 numbers
*@argc: number of arguments
*@argv: argument array
*
*Return: unless error
*
*/
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
