#include "main.h"
#include <stdio.h>

/**
 * flip_bits - returns the number of bits that need to be flipped
 * to convert one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits that need to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int results;
	int counter;

	results = n ^ m;
	counter = 0;

	while (results)
	{
		counter++;
		results &= (results - 1);
	}

	return (counter);
}

