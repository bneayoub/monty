#include "monty.h"

/**
 * parse_line - Check code
 * @current_line: current
 * @stack: ptr to stack
 * @line_num: The line number
 * Return: void
 */
int parse_line(char *current_line, stack_t **stack, unsigned int line_num)
{
	char *opcode = strtok(current_line, " \t\n"), *arg;
	int status = 0;

	if (opcode == NULL || opcode[0] == '#')
		return (0);

	arg = strtok(NULL, " \t\n");
	if (strcmp(opcode, "push") == 0)
		status = validate_push(arg, line_num);
	if (status == -1)
		return (-1);
	exe_instr(opcode, arg, stack, line_num);
	return (0);
}

/**
 * parse_file - Check code
 * @file_ptr: ptr to file.
 * @stack: ptr to stack.
 * Return: void
 */
int parse_file(FILE *file_ptr, stack_t **stack)
{
	char *current_line = NULL;
	size_t len = 0;
	unsigned int line_num = 0;
	ssize_t read;
	int status = 0;

	while ((read = getline(&current_line, &len, file_ptr)) != -1)
	{
		line_num++;
		status = parse_line(current_line, stack, line_num);
		if (status == -1)
		{
			free(current_line);
			return (-1);
		}
	}
	free(current_line);
	return (0);
}
