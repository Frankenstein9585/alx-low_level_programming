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

for (a = 48; a < 57; a++)
{
putchar(a);
putchar(',');
putchar(' ');
}
putchar(57);
return (0);
}
