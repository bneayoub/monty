#include "monty.h"

/**
 * main - Entry point
 * @argc: num of args
 * @argv: list of args
 * Return: void
 */

int main(int argc, char *argv[])
{
	FILE *file_p;
	stack_t *stack = NULL;
	int checker_status;

	num_of_args_check(argc, argv);
	file_p = op_file(argv[1]);
	checker_status = parse_file(file_p, &stack);
	if (checker_status == -1)
	{
		clean_mem(&stack, file_p);
		return (EXIT_FAILURE);
	}
	clean_mem(&stack, file_p);

	return (EXIT_SUCCESS);
}
