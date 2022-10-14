#include <stdio.h>
/* more headers goes there */
/**
 *  * main - Does more stuff
 *   *
 *    * Return: 0 on success
 */
int main(void)
{
char a = 'a';

while (a <= 'z')
{
putchar(a);
a++;
}
a = 'A';
while (a <= 'Z')
{
putchar(a);
a++;
}
putchar('\n');
return (0);
}
