#include <stdio.h>
/* more headers goes there */
/**
 *  * main - Does more stuff
 *   *
 *    * Return: 0 on success
 */
int main(void)
{
char a;

for (a = 48; a <= 57; a++)
{
putchar(a);
}
a = 'a';
for (a = 'a'; a <= 'f'; a++)
{
putchar(a);
}
putchar('\n');
return (0);
}
