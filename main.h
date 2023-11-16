#ifndef _MONTY_H
#define _MONTY_H

#define _GNU_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdarg.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

typedef void (*code_func)(stack_t **, unsigned int);
extern stack_t *head;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
<<<<<<< HEAD
        char *op_code;
        void (*f)(stack_t **stack, unsigned int line_number);
=======
	char *op_code;
	void (*f)(stack_t **stack, unsigned int line_number);
>>>>>>> 98ddc791179df8c67a3a153b7deeb2ad1db0e38d
} instruction_t;

void open_f(char *name_f);

int diviser(char *bf, int nbre, int format);
void choose_function(char *op_code, char *vl, int ln, int format);
void main_func(code_func func, char *op, char *val, int nbre, int format);
<<<<<<< HEAD

void free_nodes(void);
stack_t *new_node(int n);

=======

void free_nodes(void);
stack_t *new_node(int n);

>>>>>>> 98ddc791179df8c67a3a153b7deeb2ad1db0e38d
void push(stack_t **stack, unsigned int val);
void push_queue(stack_t **stack, unsigned int val);
void pall(stack_t **stack, unsigned int nbre);
#endif

