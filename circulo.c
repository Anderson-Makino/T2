#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "circulo.h"

void indentificacirculo (char *ch,char *info,int ncirc,circulo *circ)
{
    circ[ncirc].i=atoi(info);
}

void pegacorcirculo(char *ch,char *info,int ncirc,circulo *circ)
{
    int i,j=1;
    info=strtok(ch," ");
    circ[ncirc].cor1=(char *) malloc((strlen(info)+1)*sizeof(char));
    strcpy(circ[ncirc].cor1,info);
    info=strtok(ch," ");
    circ[ncirc].cor2=(char *) malloc((strlen(info)+3)*sizeof(char));
    circ[ncirc].cor2[0]='\"';
    for(i=0;i<strlen(info);i++)
    {
        circ[ncirc].cor2[j]=info[i];
        j++;
    }
    circ[ncirc].cor2[j]='\"';
    j++;
    circ[ncirc].cor2[j]='\0';
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

int devolvestrlencor1circulo(int j,circulo *circ)
{
    int tam;
    tam=strlen(circ[j].cor1);
    return (tam);
}

int devolvestrlencor2circulo(int j,circulo *circ)
{
    int tam;
    tam=strlen(circ[j].cor2);
    return (tam);
}

char *devolvecor1circulo(int j,circulo *circ)
{
    return(circ[j].cor1);
}

char *devolvecor2circulo(int j,circulo *circ)
{
    return(circ[j].cor2);
}

float devolveraio(int j,circulo *circ)
{
    return (circ[j].r);
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
    info=strtok(ch," ");
    circ=malloc((ncirc+1) * sizeof(circulo));
    indentificacirculo(ch,info,ncirc,circ);
    pegacorcirculo(ch,info,ncirc,circ);
    pegaraio(ch,info,ncirc,circ);
    pegacoordenadascirculo(ch,info,ncirc,circ);
    return (circ);
}