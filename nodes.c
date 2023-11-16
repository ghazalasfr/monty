#include "monty.h"

/**
 * new_node - Creates a new node.
 * @n: .........
 * Return: ............
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
}

/**
 * free_nodes - Frees nodes in the stack.
 */
void free_nodes(void)
{
        stack_t *tmp;

        if (head == NULL)
                return;

        while (head != NULL)
        {
                tmp = head;
                head = head->next;
                free(tmp);
        }
}

