#include "monty.h"

/**
 * push_stack - check code
 * @stack: ptr to  stack.
 * @new_node: the node
 */
void push_stack(stack_t **stack, stack_t *new_node)
{
	new_node->prev = NULL;
	new_node->next =  *stack;
	if (*stack != NULL)
		(*stack)->prev = new_node;
	*stack = new_node;
}
