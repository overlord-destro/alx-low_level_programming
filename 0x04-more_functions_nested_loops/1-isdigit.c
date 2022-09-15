#include "main.h"
/**
*_isupper - checks if character is digit
*
*@c: character to be checked
*
*Return: 1 if succes 0 otherwise
*
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}


