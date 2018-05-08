#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "args.h"

char arqentrada (char *entrada,int i,char *argv[])
{
	int j;
	entrada=(char *) malloc(strlen((*argv[i])+1)*sizeof(char));
	for (j=0;j<strlen(*argv[i]);j++)
	{
		entrada[j]=argv[i] [j];
	}
	return(entrada);
}

char arqsaida (char *saida,int i,char *argv[])
{
	int j;
	saida=(char *) malloc(strlen(*argv[i]+1)*sizeof(char));
	for (j=0;j<strlen(*argv[i]);j++)
	{
		saida[j]=argv[i] [j];
	}
	return(saida);
}

void verific(char *entrada,char *saida,int argc,char *argv[])
{
	int i;
	for (i=1;i<argc;i++)
	{
	if (argv[i][0]=='-')
	{
		if (argv[i][1]!='f')
		{
			entrada=arqentrada(entrada,i+1,argv);
		}
		else if(argv[i] [1]=='o')
		{
			saida=arqsaida(saida,i+1,argv);
		}
	}
	}
}
