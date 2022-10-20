#include <stdio.h>
/**
*premain - executes before main
*/
void __attribute__ ((CONSTRUCTOR)) premain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
