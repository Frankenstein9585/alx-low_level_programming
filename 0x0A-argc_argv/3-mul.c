#include <stdio.h>
#include <stdlib.h>

/**
  * main - Prints the name of this function
  * @argc: Int argument gotten from command line
  * @argv: Pointer to char array of strings gotten from command line
  * Return: 0 upon Success
  */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int product;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		product = i * j;
		printf("%d\n", product);
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}
	return (0);
}
