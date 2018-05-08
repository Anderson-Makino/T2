#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "learq.h"
#include "comandos.h"

void learq(char *entrada,char *saida)
{
	FILE *e,*s;
	e=fopen (entrada,"r");
	s=fopen(saida,"w");
	if (e==NULL)
	{
	printf("erro ao abrir o arquivo");
	exit (0);
	}
	comandos(e);
	fclose(e);
	fclose(s);
}
