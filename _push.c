#include "monty.h"

/**
 * _push - check code
 * @stack: ptr to tack.
 * @line_num: The line number
 */
void _push(stack_t **stack, unsigned int line_num)
{
	stack_t *new_node = malloc(sizeof(stack_t));
	(void)line_num;

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = VALUE_TO_PUSH;

	if (MODE == STACK)
		push_stack(stack, new_node);
	else
		push_queue(stack, new_node);
}
