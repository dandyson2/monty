#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#define _GNU_SOURCE

/**
* main - Monty main function
* @ac: Argument count
* @av: Argument vector
* Return: If success, 0
*/

int main(int ac, char *av[])
{
	unsigned int offset;
	stack_t *stack = NULL;
	ssize_t read_line;
	size_t _prop = 0;
	char *hosting;
	FILE *hhost;

	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	hhost = fopen(av[1], "r");
	carrier.hhost = hhost;

	if (!hhost)
	{
		fprintf(stderr, "Error: Can't open file %s\n", av[1]);
		exit(EXIT_FAILURE);
	}
	for (offset = 1; (read_line = getline(&hosting, &_prop, hhost)) != -1;
			offset++)
	{
		carrier.hosting = hosting;

		if (read_line > 0)
		{
			execle(hosting, &stack_t, offset, hhost);
		}

		free(hosting);
		hosting = NULL;
	}

	free_stack(stack);
	fclose(hhost);

	return (0);
}
