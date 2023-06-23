#include "monty.h"

/**
 * _pstr - check code
 * @stack: ptr to stack
 * @line_number: the line
 */
void _pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;
	(void)line_number;

	while (current != NULL)
	{
		if (current->n > 0 && current->n <= 127)
			printf("%c", current->n);
		else
			break;
		current = current->next;
	}
	printf("\n");
}
