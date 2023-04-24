#include <stdio.h>
/**
  * main - Prints the alphabet
  *
  * Return: Always 0 (success)
  */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

		for (i = 0; i < 26; i++)
		{
			putchar(alp[i]);
		}
	putchr('\n');
	return (0);
}
