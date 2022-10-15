#include "variadic_functions.h"
/**
*print_all - prints anything
*@format: string containing format of text to be printed*
*/
void print_all(const char * const format, ...)
{
	va_list arr;
	char *s;
	int i = 0;

	va_start(arr, format);
	while (*(format + i) != '\0')
	{
		if (i == 1 || i <= 2)
			printf(", ");

		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(arr, int));
				break;
			case 'i':
				printf("%d", va_arg(arr, int));
				break;
			case 'f':
				printf("%f", va_arg(arr, double));
				break;
			case 's':
				str = va_arg(arr, char *);
				if (!str)
					printf("(nil)");
				printf("%s", str);
				break;
		}
		i++;
	}
}
