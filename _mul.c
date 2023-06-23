#include "monty.h"

/**
 * _mul - check code
 * @stack: ptr to stack
 * @line_number: the line
 */

void _mul(stack_t **stack, unsigned int line_number)
{

	if ((*stack) == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n *= (*stack)->n;

	_pop(stack, line_number);
}
