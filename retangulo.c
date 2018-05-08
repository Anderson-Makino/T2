#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "retangulo.h"

typedef struct retangulo{
    int i;
    float x,y;    /*coordenadas*/
    int w,h;      /*largura e altura do retangulo*/
    char *cor1,*cor2;    /*cor da borda e do preenchimento*/
}retangulo;

void indentifica (char *info)
{
    int j;
    ret->i[j]=atoi(info);
}

void pegacor(char *ch,char *info)
{
    int i;
    info=strtok(ch,' ');
    info=strtok(ch,"");
    ret->cor1=(char *) malloc((strlen(info)+1)*sizeof(char));
    for(i=0;i<strlen(info);i++)
    {
    ret->cor1[i]=info[i];
    }
    info=strtok(ch,' ');
    info=strtok(ch,"");
    ret->cor2=(char *) malloc((strlen(info)+1)*sizeof(char));
    for(i=0;i<strlen(info);i++)
    {
    ret->cor2[i]=info[i];
    }
}


void pegadimensao(char *ch,char *info)
{
    info=strtok(ch,' ');
    ret->w=atoi(info);
    info=strtok(ch,' ');
    ret->h=atoi(info);
}

void pegacoordenadas(char *ch,char *info)
{
    info=strtok(ch,' ');
    ret->x=atof(info);
    info=strtok(ch,' ');
    ret->y=atof(info);
}

int devolveidretangulo(int j)
{
    return (ret[j]->i);
}

float devolvexretangulo(int j)
{
    return(ret[j]->x);
}

float devolveyretangulo(int j)
{
    return(ret[j]->y);
}

void criaretangulo (char *ch,int nret)
{
    retangulo *ret;
    ret=(retangulo *) malloc((nret+1)*sizeof(retangulo));
    char *info;
    char espaco[2]=" ";
    info=strtok(ch,espaco);
    indentifica(info);
    pegacor(ch,info);
    pegadimensao(ch,info);
    pegacoordenadas(ch,info);
}