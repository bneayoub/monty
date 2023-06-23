#include "monty.h"

/**
 * num_of_args_check - check code
 * @argc: num of args
 * @argv: list of args
 * Return: void
 */
void num_of_args_check(int argc, char *argv[])
{
	(void)argv;
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
}

/**
 * op_file - check code
 * @fname: 1
 * Return: A pointer to the file
 */
FILE *op_file(char *fname)
{
	FILE *file_ptr = fopen(fname, "r");

	if (file_ptr == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", fname);
		exit(EXIT_FAILURE);
	}
	return (file_ptr);
}

/**
 * clean_mem - check code
 * @stack: 1
 * @file_ptr: 2
 * Return: void
 */
void clean_mem(stack_t **stack, FILE *file_ptr)
{
	stack_t *tmp;

	while (*stack != NULL)
	{
		tmp = *stack;
		*stack = (*stack)->next;
		free(tmp);
	}
	fclose(file_ptr);
}
