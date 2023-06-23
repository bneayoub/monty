#include "monty.h"

/**
 * _mod - check code
 * @stack: ptr to stack
 * @line_number: the line
 */

void _mod(stack_t **stack, unsigned int line_number)
{

	if ((*stack) == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n %= (*stack)->n;

	_pop(stack, line_number);
}
