#include <stdio.h>
/**
 * main - Does stuff
 *
 * Return: 0 on success
 */
int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
