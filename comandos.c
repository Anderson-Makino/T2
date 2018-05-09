#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "comandos.h"
#include "funcoes.h"
#include "retangulo.h"
#include "circulo.h"
#include "arquivo.h"

void comandos(FILE *e)
{
    char *comando,espaco[2]=" ";
    char linha[2000],*ch;
    char *nomearq;
    char *nomebase;
    int ndefault=1000;
    int ncirc=0,nret=0;
    circulo *circ;
    retangulo *ret;
    nomearq=(char *) malloc(sizeof(char));
	while (fgets(linha,1000,e)!=NULL)
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
        ncirc++;
    }
    
    else if (comando[0]=='r')
    {
        ch=strtok(linha,"\n");
        ret=criaretangulo (ch,nret);
        nret++;
    }
    
    else if (comando[0]=='o')
    {
        ch=strtok(linha,"\n");
        sobreposicao (ch,ncirc,nret,circ,ret);
    }
    
    else if (comando[0]=='i')
    {
        ch=strtok(linha,"\n");
        pontointerno (ch,ncirc,nret,circ,ret);
    }
    
    else if (comando[0]=='d')
    {
        ch=strtok(linha,"\n");
        distancia (ch,ncirc,nret,circ,ret);
    }
    
    else if (comando[0]=='a')
    {
        ch=strtok(linha,"\n");
        *nomearq=criaarq (nomebase,ch,nomearq);
    }
    
    else if (comando[0]=='#')
    {
        finalarq ();
    }
    }
}