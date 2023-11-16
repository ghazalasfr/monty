#include "main.h"

/**
 * diviser - Separates each line into tokens
 * @bf: line from the file
 * @nbre: line number
 * @format: O or 1.
 * Return: Returns 0 if the opcode is stack. 1 if queue.
 */

int diviser(char *bf, int nbre, int format)
{
        char *op_code, *vl;

        if (bf == NULL)
                fprintf(stderr, "Error: malloc failed\n");

        op_code = strtok(bf, "\n ");
        if (op_code == NULL)
                return (format);
        vl = strtok(NULL, "\n ");

        if (strcmp(op_code, "stack") == 0)
                return (0);
        if (strcmp(op_code, "queue") == 0)
                return (1);

        choose_function(op_code, vl, nbre, format);
        return (format);
}

/**
 * choose_function - ........
 * @op_code: ...
 * @vl: .....
 * @format:  ......
 * @ln: ....
 * Return: ....
 */
void choose_function(char *op_code, char *vl, int ln, int format)
{
        int i;
        int flag;

        instruction_t func_list[] = {
                {"push", push},
                {"pall", pall},
                {NULL, NULL}
        };

        if (op_code[0] == '#')
                return;

        for (flag = 1, i = 0; func_list[i].op_code != NULL; i++)
        {
                if (strcmp(op_code, func_list[i].op_code) == 0)
                {
                        main_func(func_list[i].f, op_code, vl, ln, format);
                        flag = 0;
                }

        }
        if (flag == 1)
                 fprintf(stderr, "L%d: unknown instruction %s\n",ln, op_code);


}


/**
 * main-func- ......
 * @func: ........
 * @op: .....
 * @val: .....
 * @nbre: .......
 * @format: ......
 * return : .....
 */
void main_func(code_func func, char *op, char *val, int nbre, int format)
{
        stack_t *node;
        int N;
        int i;

        N = 1;
        if (strcmp(op, "push") == 0)
        {
                if (val != NULL && val[0] == '-')
                {
                        val = val + 1;
                        N = -1;
                }
                if (val == NULL)
                fprintf(stderr, "L%d: usage: push integer\n", nbre);
                for (i = 0; val[i] != '\0'; i++)
                {
                        if (isdigit(val[i]) == 0)
                        fprintf(stderr, "L%d: usage: push integer\n", nbre);
                }
                node = new_node(atoi(val) * N);
                if (format == 0)
                        func(&node, nbre);
                if (format == 1)
                        push_queue(&node, nbre);
        }
        else
                func(&head, nbre);
}

