#define _GNU_SOURCE
#include <string.h>
#include <stdio.h>
#include "monty.h"

/**
 * open_f - opens a file
 * @name_f: the file name
 * Return: void
 */

void open_f(char *name_f)
{
        int nbre, format = 0;
        char *bf = NULL;
        size_t len = 0;
      
        FILE *dossier = fopen(name_f, "r");
        if (dossier == NULL) {
                fprintf(stderr, "Error: Can't open file %s\n", name_f);
                exit(EXIT_FAILURE);
        }

        if (name_f == NULL ){
                fprintf(stderr, "Error: Can't open file %s\n",name_f);
                exit(EXIT_FAILURE);
        }
	
	for (nbre= 1; getline(&bf, &len, dossier) != -1; nbre++)
	{
		format = diviser(bf, nbre, format);
	}
        free(bf);
        fclose(dossier);
}
