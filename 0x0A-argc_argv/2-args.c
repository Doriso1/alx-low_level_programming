#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: print the number of arguments
 * @argv: print the array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int w;

	for (w = 0; w < argc; w++)
	{
		printf("%s\n", argv[w]);
	}

	return (0);
}

