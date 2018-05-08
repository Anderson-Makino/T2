#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "circulo.h"

typedef struct circulo{
    int i;       /*indentificador*/
    float x,y;   /*coordenadas*/
    int r;      /*raio do circulo*/
    char *cor1,*cor2;    /*cor da borda e do preenchimento*/
}circulo;

void indentifica (char *ch,char *info,int ncirc)
{
    circulo *circ;
    info=strtok(ch," ");
    circ[ncirc].i=atoi(info);
}

void pegacor(char *ch,char *info,int ncirc)
{
    circulo *circ;
    info=strtok(ch," ");
    circ[ncirc].cor1=(char *) malloc((strlen(info)+1)*sizeof(char));
    strcpy(circ[ncirc].cor1,info);
    info=strtok(ch," ");
    circ[ncirc].cor2=(char *) malloc((strlen(info)+1)*sizeof(char));
    strcpy(circ[ncirc].cor2,info);
}


void pegaraio(char *ch,char *info,int ncirc)
{
    circulo *circ;
    info=strtok(ch," ");
    circ[ncirc].r=atoi(info);
}

void pegacoordenadas(char *ch,char *info,int ncirc)
{
    circulo *circ;
    info=strtok(ch," ");
    circ[ncirc].x=atof(info);
    info=strtok(ch," ");
    circ[ncirc].y=atof(info);
}

int devolveidcirculo(int j)
{
    circulo *circ;
    return (circ[j].i);
}

float devolvexcirculo(int j)
{
    circulo *circ;
    return (circ[j].x);
}

float devolveycirculo(int j)
{
    circulo *circ;
    return (circ[j].y);
}

void criacirculo (char *ch,int ncirc)
{
    circulo *circ;
    char *info;
    circ=(circulo *) malloc((ncirc+1) * sizeof(circulo));
    indentifica(ch,info,ncirc);
    pegacor(ch,info,ncirc);
    pegaraio(ch,info,ncirc);
    pegacoordenadas(ch,info,ncirc);
}