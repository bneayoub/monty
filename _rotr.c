#include "monty.h"


/**
 * _rotr - check code
 * @stack: ptr to stack
 * @line_number: the line
 */

void _rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *current;
	(void)line_number;

	if (*stack == NULL || (*stack)->next == NULL)
		return;

	current = *stack;

	while (current->next != NULL)
		current = current->next;

	current->next = *stack;
	current->prev->next = NULL;
	current->prev = NULL;
	(*stack)->prev = current;
	*stack = current;
}
