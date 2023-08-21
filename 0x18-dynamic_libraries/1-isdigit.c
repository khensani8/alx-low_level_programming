#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks to see if parameter is between 0 and 9
 *
 * @c: the parameter that needs to be checked
 *
 * Return: 1 if it is number btween 0 and 9, otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
