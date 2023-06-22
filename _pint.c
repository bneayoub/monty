#include "monty.h"

/**
 * _pint - check code
 * @stack: ptr to stack
 * @line_num: the line
 */

void _pint(stack_t **stack, unsigned int line_num)
{

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_num);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
