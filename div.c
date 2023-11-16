#include "monty.h"
/**
 * divion - ........
 * @stack: ....
 * @nbre: .....
 */
void divion(stack_t **stack, unsigned int nbre)
{
	int div;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL){
		fprintf(stderr, "L%d: can't div, stack too short\n", nbre);
		exit(EXIT_FAILURE);
		}

	if ((*stack)->n == 0)
		fprintf(stderr, "L%d: division by zero\n",nbre);
	(*stack) = (*stack)->next;
	div = (*stack)->n / (*stack)->prev->n;
	(*stack)->n = div;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
