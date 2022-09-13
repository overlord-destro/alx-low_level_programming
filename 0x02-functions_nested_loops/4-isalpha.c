#include "main.h"
/**
 *_isalpha - checks if a character is lowercase or uppercase
 *
 *@c: the character to be checked
 *
 *Return: 1 if lower or upper else returns 0
 *
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
