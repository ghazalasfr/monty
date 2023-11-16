#include "monty.h"
#define ERR_BAD_MALL 1

/**
  * push - Adds a new node at the beginning of the stack
  * @stack: The head of the stack
  * @val: The value to adds on the stack
  *
  * Return: Nothing
  */
void push(stack_t **stack, unsigned int val){
        stack_t *tmp;
	(void)val;

	if (stack == NULL || *stack == NULL)
		exit(EXIT_FAILURE);
	if (head == NULL)
	{
		head = *stack;
		return;
	}
	tmp = head;
	head = *stack;
	head->next = tmp;
	tmp->prev = head;
}

/**
  * push_queue - Adds a new node at the end of the stack
  * @stack: The head of the stack
  * @val: The value to adds on the stack
  *
  * Return: Nothing
  */
void push_queue(stack_t **stack, unsigned int val)
{
	stack_t *tmp;
	(void) val;

	if (stack == NULL || *stack == NULL)
		exit(EXIT_FAILURE);
	if (head == NULL)
	{
		head = *stack;
		return;
	}
	tmp = head;
	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = *stack;
	(*stack)->prev = tmp;
}
