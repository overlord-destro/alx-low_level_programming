#include <stdio.h>
/**
*main - prints out every argument it receives
*@argc: size of argv
*@argv: array vector containing arguments
*
*Return: always 0
*
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	while(*argv)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
