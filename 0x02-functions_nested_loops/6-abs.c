#include "main.h"
/**
 * _abs - returns absolute value of an int
 * @n: integer from which to get an absolute value
 * Return: absolute value.
 */

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}

