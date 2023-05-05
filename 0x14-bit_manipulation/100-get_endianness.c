#include "main.h"
#include <stdio.h>

/**
 * get_endianness - checks the endianness of the system
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int num = 1;
if (*(char *)&num == 1)
	return (1); /* little endian */
else
		return (0); /* big endian */
}
