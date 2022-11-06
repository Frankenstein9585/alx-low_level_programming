#include <stdio.h>

/**
  * main - Prints the name of this function
  * @argc: Int argument gotten from command line
  * @argv: Pointer to char array of strings gotten from command line
  * Return: 0 upon Success
  */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
