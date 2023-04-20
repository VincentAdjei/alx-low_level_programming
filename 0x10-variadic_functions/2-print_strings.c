#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: is the string to be printed between the strings
 * @n: number of arguments
 * Print a new line at the end of your function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list vin;

	va_start(vin, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(vin, char *);
		if (!str)
			str = "(nil)";
		if (!separator)
			printf("%s", str);
		else if (separator && i == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}

	printf("\n");

	va_end(vin);
}
