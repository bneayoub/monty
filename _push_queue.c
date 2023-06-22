#include "monty.h"

/**
 * push_queue - check code
 * @stack: ptr to stack.
 * @new_node: the node
 */
void push_queue(stack_t **stack, stack_t *new_node)
{
	stack_t *tail = *stack;

	if (tail == NULL)
	{
		new_node->prev = NULL;
		*stack = new_node;
	}
	else
	{

		while (tail->next)
			tail = tail->next;
		tail->next = new_node;
		new_node->prev = tail;
	}
	new_node->next = NULL;
}
