#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "circulo.h"

void indentificacirculo (char *ch,char *info,int ncirc,circulo *circ)
{
    info=strtok(ch," ");
    circ[ncirc].i=atoi(info);
}

void pegacorcirculo(char *ch,char *info,int ncirc,circulo *circ)
{
    info=strtok(ch," ");
    circ[ncirc].cor1=(char *) malloc((strlen(info)+1)*sizeof(char));
    strcpy(circ[ncirc].cor1,info);
    info=strtok(ch," ");
    circ[ncirc].cor2=(char *) malloc((strlen(info)+1)*sizeof(char));
    strcpy(circ[ncirc].cor2,info);
}


void pegaraio(char *ch,char *info,int ncirc,circulo *circ)
{
    info=strtok(ch," ");
    circ[ncirc].r=atoi(info);
}

void pegacoordenadascirculo(char *ch,char *info,int ncirc,circulo *circ)
{
    info=strtok(ch," ");
    circ[ncirc].x=atof(info);
    info=strtok(ch," ");
    circ[ncirc].y=atof(info);
}

int devolveidcirculo(int j,circulo *circ)
{
    return (circ[j].i);
}

float devolvexcirculo(int j,circulo *circ)
{
    return (circ[j].x);
}

float devolveycirculo(int j,circulo *circ)
{
    return (circ[j].y);
}

circulo *criacirculo (char *ch,int ncirc)
{
    circulo *circ;
    char *info;
    circ=malloc((ncirc+1) * sizeof(circulo));
    indentificacirculo(ch,info,ncirc,circ);
    pegacorcirculo(ch,info,ncirc,circ);
    pegaraio(ch,info,ncirc,circ);
    pegacoordenadascirculo(ch,info,ncirc,circ);
    return (circ);
}