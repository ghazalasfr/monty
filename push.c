#include "main.h"
#define ERR_BAD_MALL 1

/**
  * push - Adds a new node at the beginning of the stack
  * @stack: The head of the stack
  * @param: The value to adds on the stack
  *
  * Return: Nothing
  */
void push(stack_t **stack, unsigned int val){
       	stack_t *newNode = NULL;
	newNode = (stack_t *)malloc(sizeof(stack_t));
       	if (newNode == NULL) {
	       	fprintf(stderr, "Error: Unable to allocate memory.\n");
		exit(ERR_BAD_MALL);
       	}
	newNode->n = val;
	if (*stack) {
		newNode->next = *stack;
		newNode->prev = (*stack)->prev;
		(*stack)->prev = newNode;
		*stack = newNode;
	} else {
		newNode->next = *stack;
		newNode->prev = NULL;
		*stack = newNode;
	}
}
