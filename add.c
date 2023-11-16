#include "monty.h"

/**
 * add - ........
 * @stack: ....
 * @nbre: .....
 */
void add(stack_t **stack, unsigned int nbre)
{
	int sum;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL){
		fprintf(stderr, "L%d: can't add, stack too short\n", nbre);
		exit(EXIT_FAILURE);
		}

	(*stack) = (*stack)->next;
	sum = (*stack)->n + (*stack)->prev->n;
	(*stack)->n = sum;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
