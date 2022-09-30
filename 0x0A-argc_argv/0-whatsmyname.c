#include <stdio.h>
/**
*main - prints out the name of the program in the argv vector array
*@argc: number of arguments in argumnet vector
*@argv: argument vector containing parameters
*
*Return: 0 unless error
*/
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - argc]);

	return (0);
}
