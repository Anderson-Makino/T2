#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "comandos.h"
#include "funcoes.h"
#include "retangulo.h"
#include "circulo.h"
#include "arquivo.h"

void comandos(FILE *e,char *diretorio,char *nomebase)
{
    FILE *sig;
    char *comando,espaco[2]=" ";
    char *linha,*ch;
    char cha;
    char *nomearq;
    char *dio;
    char *svg;
    int ndefault=1000;
    int ncirc=0,nret=0;
    int sizefile;
    circulo *circ;
    retangulo *ret;
    dio=malloc(sizeof(0));
    svg=malloc(sizeof(0));
    nomearq=(char *) malloc(sizeof(char));
    while (1)
	{
		cha=fgetc(e);
        if (cha==EOF)
		{
            break;
		}
        sizefile++;
	}
    linha=malloc(sizeof(char)*sizefile);
	while (fgets(linha,sizefile,e)!=NULL)
	{
	ch=strtok(linha,espaco);
    comando=(char *) malloc(2*sizeof(char));
    if (comando[0]=='n' && comando[1]=='x')
    {
        ch=strtok(linha,"\n");
        ncirculo(&ndefault,ch);
    }
    else if (comando[0]=='c')
    {
        ch=strtok(linha,"\n");
        circ=criacirculo (ch,ncirc);
        escrevesvgcirc(sig,ncirc,circ);
        ncirc++;
    }
    
    else if (comando[0]=='r')
    {
        ch=strtok(linha,"\n");
        ret=criaretangulo (ch,nret,svg);
        escrevesvgquad (sig,nret,ret);
        nret++;
    }
    
    else if (comando[0]=='o')
    {
        ch=strtok(linha,"\n");
        sobreposicao (ch,ncirc,nret,circ,ret,dio);
    }
    
    else if (comando[0]=='i')
    {
        ch=strtok(linha,"\n");
        pontointerno (ch,ncirc,nret,circ,ret,dio);
    }
    
    else if (comando[0]=='d')
    {
        ch=strtok(linha,"\n");
        distancia (ch,ncirc,nret,circ,ret,dio);
    }
    
    else if (comando[0]=='a')
    {
        ch=strtok(linha,"\n");
        *nomearq=criaarq (diretorio,nomebase,ch,nomearq);
    }
    
    else if (comando[0]=='#')
    {
        finalarq ();
    }
    }
}