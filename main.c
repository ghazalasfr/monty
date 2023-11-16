#include "main.h"
stack_t *head = NULL;

/**
 * main - entry point
 * @argc: arguments count
 * @argv: list of arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
<<<<<<< HEAD
        if (argc != 2)
        {
                fprintf(stderr, "USAGE: monty file\n");
                exit(EXIT_FAILURE);
        }
        open_f(argv[1]);
        free_nodes();
        return (0);
}

=======
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	open_f(argv[1]);
	free_nodes();
	return (0);
}
>>>>>>> 98ddc791179df8c67a3a153b7deeb2ad1db0e38d
