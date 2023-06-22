#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
* struct stack_s - doubly linked list representation of a stack (or queue)
* @n: integer
* @prev: points to the previous element of the stack (or queue)
* @next: points to the next element of the stack (or queue)
*
* Description: doubly linked list node structure
* for stack, queues, LIFO, FIFO
*/

typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
* struct instruction_s - opcode and its function
* @opcode: the opcode
* @f: function to handle the opcode
*
* Description: opcode and its function
* for stack, queues, LIFO, FIFO
*/

typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
* struct carrier_s - File, arguments, contents of
* line
* @arg:The value
* @hhost: Ptr to the monty file
* @hosting: The contents line
* @fflags: Flag change queue __ stack
*
* Description: Contents of variables that can be
* accesses by other files in the program
*/
typedef struct carrier_s
{
	int fflags;
	char *hosting;
	FILE *hhost;
	char *arg;
}  carrier_t;

carrier_t carrier;

void push_stack(stack_t **_pointer_, unsigned int offset);
void pall_stack(stack_t **_pointer_, unsigned int offset);

#endif
