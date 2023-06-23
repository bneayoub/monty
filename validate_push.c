#include "monty.h"

/**
 * validate_push - Check code
 * @arg: The argument
 * @line_number: The line
 * Return: void
 */
int validate_push(char *arg, unsigned int line_number)
{
	int idx = 0;

	if (arg == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		return (-1);
	}

	if (arg[0] == '-')
		idx++;

	for (; arg[idx]; idx++)
	{
		if (!isdigit((unsigned char)arg[idx]))
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			return (-1);
		}
	}

	return (0);
}
