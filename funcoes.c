#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "funcoes.h"

void ncirculo (int *ndefault,char *ch)
{
    *ndefault=atoi(ch);
}

void sobreposicao (char *ch,int ncirc,int nret,circulo *circ,retangulo *ret)
{
    char *info;
    int nforma;
    int i;
    float j,k;
    float raioj=0,alturaj=0,larguraj=0;
    float raiok=0,alturak=0,largurak=0;
    int xj,yj;
    int xk,yk;
    info=strtok(ch," ");
    j=atoi(info);
    info=strtok(ch," ");
    k=atoi(info);
        for(i=0;i<ncirc;i++)
    {
        nforma=devolveidcirculo(i,circ);
        if (j==nforma)
        {
            raioj=devolveraio(i,circ);
            xj=devolvexcirculo(i,circ);
            yj=devolveycirculo(i,circ);
        }
    }
    for(i=0;i<nret;i++)
    {
        nforma=devolveretangulo(i,ret);
            if (j==nforma)
        {
            alturaj=devolvealtura(i,ret);
            larguraj=devolvelargura(i,ret);
            xj=devolvexretangulo(i,ret);
            yj=devolveyretangulo(i,ret);
        }
    }
    for(i=0;i<ncirc;i++)
    {
        nforma=devolveidcirculo(i,circ);
        if (k==nforma)
        {
            raiok=devolveraio(i,circ);
            xk=devolvexcirculo(i,circ);
            yk=devolveycirculo(i,circ);
        }
    }
    for(i=0;i<nret;i++)
    {
        nforma=devolveretangulo(i,ret);
            if (k==nforma)
        {
            alturak=devolvealtura(i,ret);
            largurak=devolvelargura(i,ret);
            xk=devolvexretangulo(i,ret);
            yk=devolveyretangulo(i,ret);
        }
    }
}

int pontointerno (char *ch,int ncirc,int nret,circulo *circ,retangulo *ret)
{
    char *info;
    int id,i;
    char *nforma; /*ID da forma geometrica*/
    int raio,altura,largura;
    int x,y;
    int xforma,yforma; /*coordenadas do centro da figura geometrica*/
    char *resultado,funcao=i; /*resultado da funcao (se é ou nao ponto interno)*/
    resultado=(char *) malloc(3*sizeof(char));
    info=strtok(ch," ");
    id=atoi(info);
    info=strtok(ch," ");
    x=atof(info);
    info=strtok(ch," ");
    y=atof(info);
    for(i=0;i<ncirc;i++)
    {
        nforma=devolveidcirculo(i,circ);
        if (id==nforma)
        {
            raio=devolveraio(i);
            xforma=devolvexcirculo(i,circ);
            yforma=devolveycirculo(i,circ);
            if(x>=(xforma-raio) && x<=(xforma+raio) && y>=(yforma-raio) && y<=(yforma+raio))
            {
                resultado="sim";
                /*ta dentro,faz uma funcao para escrever num arquivo*/
            }
            else
            {
                resultado="nao";
            }
            return 0;
        }
    }
    for(i=0;i<nret;i++)
    {
        nforma=devolveretangulo(i,ret);
            if (id==nforma)
        {
            altura=devolvealtura(i);
            largura=devolvelargura(i);
            xforma=devolvexretangulo(i,ret);
            yforma=devolveyretangulo(i,ret);
            if(x>=xforma && x<=(xforma+largura) && y>=xforma && y<=(yforma+altura))
            {
                resultado="sim";
                /*ta dentro,faz uma funcao para escrever num arquivo*/
            }
            else
            {
                resultado="nao";
            }
            return 0;
        }
    }

}
float distancia (char *ch,int ncirc,int nret,circulo *circ,retangulo *ret)
{
    char *info;
    int i;
    int j,k;   /*indentificadores*/
    float a,b;   /*distancia entre coordenadas x e y*/
    float x1,y1;  /*coordenada x e y da figura 1*/
    float x2,y2;  /*coordenada x e y da figura 2*/
    int nforma;           /*numero da forma geometrica n*/
    float result;           /*seno^2 + cos^2*/
    float distance;       /*distancia*/
    info=strtok(ch," ");
    j=atoi(info);
    info=strtok(ch," ");
    k=atoi(info);
        for(i=0;i<ncirc;i++)
    {
        nforma=devolveidcirulo(i,circ);
        if (j==nforma)
        {
            x1=devolvexcirulo(i,circ);
            y1=devolveycirulo(i,circ);
        }
    }
    for(i=0;i<nret;i++)
    {
        nforma=devolveretangulo(i,ret);
            if (j==nforma)
        {
            x1=devolvexretangulo(i,ret);
            y1=devolveyretangulo(i,ret);
        }
    }
    for(i=0;i<ncirc;i++)
    {
        nforma=devolveidcirulo(i,circ);
        if (k==nforma)
        {
            x2=devolvexcirulo(i,circ);
            y2=devolveycirulo(i,circ);
        }
    }
    for(i=0;i<nret;i++)
    {
        nforma=devolveretangulo(i,ret);
            if (k==nforma)
        {
            x2=devolvexretangulo(i,ret);
            y2=devolveyretangulo(i,ret);
        }
    }
    a=x1-x2;
    b=y1-y2;
    a=abs(a);
    b=abs(b);
    result=pow(a,2)+pow(b,2);
    distance=sqrt(result);
}