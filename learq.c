#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "learq.h"
#include "comandos.h"

void learq(char *entrada,char *diretorio)
{
	FILE *e;
	char *nomebase;
	char *token;
	token=strtok(entrada,".");
	nomebase=malloc((strlen(token)+1)*sizeof(char));
	strcpy(nomebase,token);
	e=fopen (entrada,"w+");
	if (e==NULL)
	{
	printf("erro ao abrir o arquivo");
	exit (0);
	}
	comandos(e,diretorio,nomebase);
	fclose(e);
}
