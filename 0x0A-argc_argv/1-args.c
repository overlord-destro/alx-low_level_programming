#include <stdio.h>
/**
*main - prints out number of arguments in argv vector
*
*@argc: number of arguments in vector
*@argv: argument vector
*
*Return: 0 unless error
*/
int main(int argc, char *argv[] __attribute((unused)))
{
	printf("%d\n", argc);
	return (0);
}
