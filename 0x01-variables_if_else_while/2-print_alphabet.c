#include <stdio.h>
/**
  * main - Prints the alphabet
  *
  * Return: Always 0 (success)
  */
int main(void)
{
	int n = 97;

		while (n <= 122)
		{
			putchar(n);
			n++;
		}
	putchar('\n');
	return (0);
}
