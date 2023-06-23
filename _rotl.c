#include "monty.h"


/**
 * _rotl - check code
 * @stack: ptr to stack
 * @line_number: the line
 */
void _rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *current, *tail;
	(void)line_number;

	if (*stack == NULL || (*stack)->next == NULL)
		return;
	current = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;

	tail = *stack;
	while (tail->next != NULL)
		tail = tail->next;

	tail->next = current;
	current->prev = tail;
	current->next = NULL;
}
