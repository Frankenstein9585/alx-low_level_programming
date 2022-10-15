#include <stdio.h>
/* more headers goes there */
/**
 *  * main - Does more stuff
 *   *
 *    * Return: 0 on success
 */
int main(void)
{
int a;
int b;
for (a = 48; a <= 57; a++)
{
	for (b = a + 1; b <= 57; b++)
	{
		putchar(a);
		putchar(b);
		if (a == 56 && b == 57)
			break;
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
return (0);
}
