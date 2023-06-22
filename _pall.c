#include "monty.h"


/**
 * _pall - check code
 * @stack: ptr to stack
 * @line_num: the line
 */
void _pall(stack_t **stack, unsigned int line_num)
{
	stack_t *tmp = *stack;
	(void)line_num;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
