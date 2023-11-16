#include "monty.h"
/**
 * sub - ........
 * @stack: ....
 * @nbre: .....
 */
void sub(stack_t **stack, unsigned int nbre)
{
	int sub;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL){
		fprintf(stderr, "L%d: can't sub, stack too short\n", nbre);
		exit(EXIT_FAILURE);
		}

	(*stack) = (*stack)->next;
	sub = (*stack)->n - (*stack)->prev->n;
	(*stack)->n = sub;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
