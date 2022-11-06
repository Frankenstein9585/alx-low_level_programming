#include <ctype.h>
#include <string.h>
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
	int sum = 0;


	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < (int) strlen(argv[i]); j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
