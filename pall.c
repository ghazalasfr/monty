#include "main.h"

/**
 * pall - Prints all the values on the stack,
 * starting from the top of the stack.
 * @stack: The head of the stack
 * @nbre: The line on which the error occurred
 *
 * Return: Nothing
 */
void pall(stack_t **stack, unsigned int nbre)
{
	stack_t *current = NULL;
	(void) nbre;

	if (*stack)
	{
		current = *stack;
		while (current != NULL)
		{
			printf("%d\n", current->n);
			current = current->next;
		}
	}
}
