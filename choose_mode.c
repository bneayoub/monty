#include "monty.h"

/**
 * stack_mode - check code
 * @stack: ptr to stack
 * @line_number: the line
 */
void stack_mode(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	MODE = STACK;
}


/**
 * queue_mode - check code
 * @stack: ptr to stack
 * @line_number: the line
 */
void queue_mode(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	MODE = QUEUE;
}
