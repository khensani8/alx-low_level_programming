#include "main.h"
/**
  *_isalpha - Shows 1 if the input is a letter. Another case, shoes 0
  *Description: - checks for alphabetic character
  *@c: The charcter in ASCII code
  *
  *Return: 1 letters. 0 for the rest
  */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
