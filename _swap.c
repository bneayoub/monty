#include "monty.h"

/**
 * _swap - check code
 * @stack: ptr to stack
 * @line_number: the line
 */

void _swap(stack_t **stack, unsigned int line_number)
{
	int swaping;

	if ((*stack) == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	swaping = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = swaping;
}

