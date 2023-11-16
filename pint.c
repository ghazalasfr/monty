#include "monty.h"

/**
 * pint - Prints the value at the top of the stack,
 * followed by a new line.
 * @stack: The head of the stack
 * @line_number: The line on which the error occurred
 *
 * Return: Nothing
 */
void pint(stack_t **stack, unsigned int nbre)
{

	if (*stack == NULL)
		fprintf(stderr, "L%d: can't pint, stack empty\n",nbre);

	printf("%d\n", (*stack)->n);
}
