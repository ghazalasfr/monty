#include "monty.h"
/**
 * top - ...............
 * @stack: ..........
 * @nbre: ................
 */
void pop(stack_t **stack, unsigned int nbre)
{
	stack_t *current;

	if (stack == NULL || *stack == NULL)
		fprintf(stderr, "L%d: can't pop an empty stack\n",nbre);
	current = *stack;
	*stack = current->next;
	if (*stack != NULL)
		(*stack)->prev = NULL;
	free(current);
}
