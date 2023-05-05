#include "main.h"
#include <stdio.h>
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the decimal number to modify
 * @index: index of the bit to set to 0
 * Return: 1 if it worked, -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;
	unsigned int hold;

	if (index > 64)
		return (-1);
	hold = index;
	for (mask = 1; hold > 0; mask *= 2, hold--)
		;

	if ((*n >> index) & 1)
		*n -= mask;

	return (1);
}
