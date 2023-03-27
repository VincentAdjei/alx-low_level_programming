#include "main.h"

/**
 * _strlen - Function that returns the length of a string
 *
 * @s: this is the input string
 *
 * Return: Lenngth of the string
 */
int _strlen(char *s)
{
	int vinny;

	for (vinny = 0; s[vinny] != '\0' ; vinny++)
		;
	return (vinny);
}
