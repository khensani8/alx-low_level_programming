#include "main.h"

/**
  *_strlen_recursion - Returns the lenght of the string
  *@s: The string is to be measured
  *
  *Return: The lenght of the string
  */

int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlrn_recursion(s + 1);
	}

	return (longit);
}
