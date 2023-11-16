#include "monty.h"
/**
 * swap - ................
 * @stack: ................
 * @nbre: ..........
 */
void swap(stack_t **stack, unsigned int nbre)
{
	stack_t *tmp;
	char *s = "swap";

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL){
		fprintf(stderr, "L%d: can't %s, stack too short\n",nbre,s);
		exit(EXIT_FAILURE);
	}
	tmp = (*stack)->next;
	(*stack)->next = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = *stack;
	tmp->next = *stack;
	(*stack)->prev = tmp;
	tmp->prev = NULL;
	*stack = tmp;
}
