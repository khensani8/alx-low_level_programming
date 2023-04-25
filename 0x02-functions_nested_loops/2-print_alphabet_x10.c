#include "main.h"
/**
  *main - Entry Point
  *Description: 'Prints x10 the alphabet, in lowercase'
  *Return: Always 0.
  */
int main(void)
{
	int i;
	int j;

	for (j = 1; i <= 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
	return (0);
}
