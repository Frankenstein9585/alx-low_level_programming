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

for (a = 48; a <= 57; a++)
{
putchar(a);
	if (a == 57)
	{
		putchar('\n');
		break;
	}
putchar(',');
putchar(' ');
}
return (0);
}
