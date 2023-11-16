#include "main.h"

/**
 * new_node - Creates a new node.
 * @n: .........
 * Return: ............
<<<<<<< HEAD
*/

stack_t *new_node(int n)
{
        stack_t *node;

        node = malloc(sizeof(stack_t));
        if (node == NULL)
                fprintf(stderr, "Error: malloc failed\n");
        node->next = NULL;
        node->prev = NULL;
        node->n = n;
        return (node);
=======
 */
stack_t *head = NULL;
stack_t *new_node(int n)
{
	stack_t *node;

	node = malloc(sizeof(stack_t));
	if (node == NULL)
		fprintf(stderr, "Error: malloc failed\n");
	node->next = NULL;
	node->prev = NULL;
	node->n = n;
	return (node);
>>>>>>> 98ddc791179df8c67a3a153b7deeb2ad1db0e38d
}

/**
 * free_nodes - Frees nodes in the stack.
 */
void free_nodes(void)
{
<<<<<<< HEAD
        stack_t *tmp;

        if (head == NULL)
                return;

        while (head != NULL)
        {
                tmp = head;
                head = head->next;
                free(tmp);
        }
=======
	stack_t *tmp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
>>>>>>> 98ddc791179df8c67a3a153b7deeb2ad1db0e38d
}

