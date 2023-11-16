<<<<<<< HEAD
#define _GNU_SOURCE
#include <string.h>
=======
#define  _GNU_SOUiRCE
#include <stdio.h>
>>>>>>> 98ddc791179df8c67a3a153b7deeb2ad1db0e38d
#include "main.h"

/**
 * open_f - opens a file
 * @name_f: the file name
 * Return: void
 */

void open_f(char *name_f)
{
<<<<<<< HEAD
        int nbre, format = 0;
        char *bf = NULL;
        size_t len = 0;
        ssize_t read =0;
        FILE *dossier = fopen(name_f, "r");
        read= getline(&bf, &len, dossier) ;

        if (name_f == NULL || dossier == NULL)
                fprintf(stderr, "Error: Can't open file %s\n",name_f);
        for (nbre = 1; read != -1; nbre++)
        {
                format = diviser(bf, nbre, format);
        }
        free(bf);
        fclose(dossier);
}

=======
	int nbre, format = 0;
	char *bf = NULL;
	size_t len = 0;
	ssize_t read =0;
	FILE *dossier = fopen(name_f, "r");
	read= getline(&bf, &len, dossier) ;

	if (name_f == NULL || dossier == NULL)
		fprintf(stderr, "Error: Can't open file %s\n",name_f);
	for (nbre = 1; read != -1; nbre++)
	{
		format = diviser(bf, nbre, format);
	}
	free(bf);
	fclose(dossier);
}
>>>>>>> 98ddc791179df8c67a3a153b7deeb2ad1db0e38d
