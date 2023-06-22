#include "monty.h"

/**
 * _add - check code
 * @stack: ptr to stack
 * @line_num: the line
 */
void _add(stack_t **stack, unsigned int line_num)
{
	int sum;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_num);
		exit(EXIT_FAILURE);
	}
	sum = (*stack)->n + (*stack)->next->n;
	_pop(stack, line_num);
	(*stack)->n = sum;

}
