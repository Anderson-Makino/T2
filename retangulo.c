#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "retangulo.h"

void indentificaretangulo (char *ch,char *info,int nret,retangulo *ret)
{
    info=strtok(ch," ");
    ret[nret].i=atoi(info);
}

void pegacorretangulo(char *ch,char *info,int nret,retangulo *ret)
{
    int i,j=1;
    info=strtok(ch," ");
    ret[nret].cor1=(char *) malloc((strlen(info)+1)*sizeof(char));
    strcpy(ret[nret].cor1,info);
    info=strtok(ch," ");
    ret[nret].cor2=(char *) malloc((strlen(info)+3)*sizeof(char));
        ret[nret].cor2[0]='\"';
    for(i=0;i<strlen(info);i++)
    {
        ret[nret].cor2[j]=info[i];
        j++;
    }
    ret[nret].cor2[j]='\"';
    j++;
    ret[nret].cor2[j]='\0';
}


void pegadimensao(char *ch,char *info,int nret,retangulo *ret)
{
    ret[nret].w=atof(info);
    info=strtok(ch," ");
    ret[nret].h=atof(info);
}

void pegacoordenadasretangulo(char *ch,char *info,int nret,retangulo *ret)
{
    info=strtok(ch," ");
    ret[nret].x=atof(info);
    info=strtok(ch," ");
    ret[nret].y=atof(info);
}

int devolvestrlencor1retangulo(int j,retangulo *ret)
{
    int tam;
    tam=strlen(ret[j].cor1);
    return (tam);
}

int devolvestrlencor2retangulo(int j,retangulo *ret)
{
    int tam;
    tam=strlen(ret[j].cor1);
    return (tam);
}

int devolveidretangulo(int j,retangulo *ret)
{
    return (ret[j].i);
}

char *devolvecor1retangulo(int j,retangulo *ret)
{
    return (ret[j].cor1);
}

char *devolvecor2retangulo(int j,retangulo *ret)
{
    return (ret[j].cor2);
}

float devolvealtura(int j,retangulo *ret)
{
    return (ret[j].h);
}

float devolvelargura(int j,retangulo *ret)
{
    return (ret[j].w);
}

float devolvexretangulo(int j,retangulo *ret)
{
    return(ret[j].x);
}

float devolveyretangulo(int j,retangulo *ret)
{
    return(ret[j].y);
}

retangulo *criaretangulo (char *ch,int nret,char *svg)
{
    char *info;
    retangulo *ret;
    info=strtok(ch," ");
    ret=(retangulo *) malloc((nret+1)*sizeof(retangulo));
    indentificaretangulo(ch,info,nret,ret);
    pegacorretangulo(ch,info,nret,ret);
    pegadimensao(ch,info,nret,ret);
    pegacoordenadasretangulo(ch,info,nret,ret);
    return (ret);
}