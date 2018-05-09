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
    info=strtok(ch," ");
    ret[nret].cor1=(char *) malloc((strlen(info)+1)*sizeof(char));
    strcpy(ret[nret].cor1,info);
    info=strtok(ch," ");
    ret[nret].cor2=(char *) malloc((strlen(info)+1)*sizeof(char));
    strcpy(ret[nret].cor2,info);
}


void pegadimensao(char *ch,char *info,int nret,retangulo *ret)
{
    info=strtok(ch," ");
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

int devolveidretangulo(int j,retangulo *ret)
{
    return (ret[j].i);
}

float devolvexretangulo(int j,retangulo *ret)
{
    return(ret[j].x);
}

float devolveyretangulo(int j,retangulo *ret)
{
    return(ret[j].y);
}

retangulo *criaretangulo (char *ch,int nret)
{
    char *info;
    retangulo *ret;
    ret=(retangulo *) malloc((nret+1)*sizeof(retangulo));
    indentificaretangulo(ch,info,nret,ret);
    pegacorretangulo(ch,info,nret,ret);
    pegadimensao(ch,info,nret,ret);
    pegacoordenadasretangulo(ch,info,nret,ret);
    return (ret);
}