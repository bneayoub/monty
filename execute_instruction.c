#include "monty.h"
int VALUE_TO_PUSH = 0;
int MODE = STACK;

/**
 * get_instruction - check code
 * @opcode: The opcode
 * @instrs: The instructions
 * Return: A pointer to the instr
 */
instruction_t *get_instruction(char *opcode, instruction_t *instrs)
{
	int idx;

	for (idx = 0; instrs[idx].opcode != NULL; ++idx)
	{
		if (strcmp(opcode, instrs[idx].opcode) == 0)
			return (&instrs[idx]);
	}
	return (NULL);
}

/**
 * exe_instr - check code
 * @opcode: The opcode
 * @arg: The argument for the opcode
 * @stack: The stack
 * @line_num: The line number of the instruction
 */
void exe_instr(char *opcode, char *arg, stack_t **stack, unsigned int line_num)
{
	instruction_t *instr;
	instruction_t instrs[] =  {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop},
		{"pchar", _pchar},
		{"pstr", _pstr},
		{"rotl", _rotl},
		{"rotr", _rotr},
		{"sub", _sub},
		{"div", _div},
		{"mul", _mul},
		{"mod", _mod},
		{"stack", stack_mode},
		{"queue", queue_mode},
		{NULL, NULL}
	};

	instr = get_instruction(opcode, instrs);

	if (instr != NULL)
	{
		if (strcmp(opcode, "push") == 0)
			VALUE_TO_PUSH = atoi(arg);
		instr->f(stack, line_num);
	}
	else
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_num, opcode);
		exit(EXIT_FAILURE);
	}
}
