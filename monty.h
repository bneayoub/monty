#ifndef _MAIN_H_
#define _MAIN_H_
#define _GNU_SOURCE


#define STACK  1
#define QUEUE  0


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <ctype.h>

extern int VALUE_TO_PUSH;
extern int MODE;

/**
 * struct stack_s - doubly linked list
 * @n: int
 * @prev: ptr to the previous element
 * @next: ptr to the next element
 *
 * Description: doubly linked list node structure
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - structure op code
 * @opcode: the operation code
 * @f: function to handle the opcode
 *
 * Description: opcode and its functions
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

int parse_line(char *curr_line, stack_t **stack, unsigned int line_num);
int parse_file(FILE *file_ptr, stack_t **stack);
instruction_t *get_instruction(char *opcode, instruction_t *instrs);
void exe_instr(char *opcode,
char *arg, stack_t **stack, unsigned int line_num);

int validate_push(char *arg, unsigned int line_number);

void _push(stack_t **stack, unsigned int line_num);
void _pall(stack_t **stack, unsigned int line_num);
void _pint(stack_t **stack, unsigned int line_num);
void _pop(stack_t **stack, unsigned int line_num);
void _swap(stack_t **stack, unsigned int line_number);
void _add(stack_t **stack, unsigned int line_num);
void _nop(stack_t **stack, unsigned int line_num);
void _pchar(stack_t **stack, unsigned int line_num);
void _pstr(stack_t **stack, unsigned int line_number);
void _rotl(stack_t **stack, unsigned int line_number);
void _rotr(stack_t **stack, unsigned int line_number);
void _sub(stack_t **stack, unsigned int line_num);
void _div(stack_t **stack, unsigned int line_num);
void _mod(stack_t **stack, unsigned int line_num);
void _mul(stack_t **stack, unsigned int line_num);

void stack_mode(stack_t **stack, unsigned int line_number);
void queue_mode(stack_t **stack, unsigned int line_number);

void push_stack(stack_t **stack, stack_t *new_node);
void push_queue(stack_t **stack, stack_t *new_node);

void num_of_args_check(int argc, char *argv[]);
FILE *op_file(char *fname);
void clean_mem(stack_t **stack, FILE *file_ptr);

#endif /*MONTY_H*/
