#include "monty.h"

/**
  * _sub - check code
 * @stack: ptr to stack
 * @line_number: the line
 */

void _sub(stack_t **stack, unsigned int line_number)
{
	stack_t *element = *stack;
	int sub_op;

	if (element == NULL || element->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	sub_op = (element->next->n) - (element->n);
	_pop(stack, line_number);
	(*stack)->n = sub_op;
}
