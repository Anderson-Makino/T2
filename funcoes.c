#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "funcoes.h"
#include "circulo.h"
#include "retangulo.h"
#include "concatena.h"

void ncirculo (int *ndefault,char *ch)
{
    *ndefault=atoi(ch);
}

void sobreposicao (char *ch,int ncirc,int nret,circulo *circ,retangulo *ret,char *dio)
{
    char *info;
    char *resultado;
    int nforma;
    int i;
    float j,k;
    float raioj=0,alturaj=0,larguraj=0;
    float raiok=0,alturak=0,largurak=0;
    int tipoj,tipok;
    int xj,yj;
    int xk,yk;
    int tamdio=strlen(dio);
    dio=malloc(((strlen(dio)+strlen(ch)+5)*sizeof(char)));
    dio=concatena (dio,ch,&tamdio);
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
            tipoj=1;
        }
    }
    for(i=0;i<nret;i++)
    {
        nforma=devolveidretangulo(i,ret);
            if (j==nforma)
        {
            alturaj=devolvealtura(i,ret);
            larguraj=devolvelargura(i,ret);
            xj=devolvexretangulo(i,ret);
            yj=devolveyretangulo(i,ret);
            tipoj=2;
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
            tipok=1;
        }
    }
    for(i=0;i<nret;i++)
    {
        nforma=devolveidretangulo(i,ret);
            if (k==nforma)
        {
            alturak=devolvealtura(i,ret);
            largurak=devolvelargura(i,ret);
            xk=devolvexretangulo(i,ret);
            yk=devolveyretangulo(i,ret);
            tipok=2;
        }
    }
    if (tipoj==1 && tipok==1) /*circulo com circulo*/
    {
        if(raioj+raiok<=xj+xk && raioj+raiok<=yj+yk)
        {
            
        }
    }
    else if(tipoj==2 && tipok==2) /*retangulo com retangulo*/
    {

    }
    else  /*retangulo com circulo*/
    {

    }
     dio=concatena (dio,resultado,&tamdio);
}

int pontointerno (char *ch,int ncirc,int nret,circulo *circ,retangulo *ret,char *dio)
{
    char *info;
    int id,i;
    char *nforma; /*ID da forma geometrica*/
    int raio,altura,largura;
    int x,y;
    int xforma,yforma; /*coordenadas do centro da figura geometrica*/
    char *resultado,funcao=i; /*resultado da funcao (se é ou nao ponto interno)*/
    int tamdio=strlen(dio);
    dio=malloc(((strlen(dio)+strlen(ch)+5)*sizeof(char)));
    dio=concatena (dio,ch,&tamdio);
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
            raio=devolveraio(i,circ);
            xforma=devolvexcirculo(i,circ);
            yforma=devolveycirculo(i,circ);
            if(x>=(xforma-raio) && x<=(xforma+raio) && y>=(yforma-raio) && y<=(yforma+raio))
            {
                resultado="sim";
            }
            else
            {
                resultado="nao";
            }
            dio=concatena (dio,resultado,&tamdio);
            return 0;
        }
    }
    for(i=0;i<nret;i++)
    {
        nforma=devolveidretangulo(i,ret);
            if (id==nforma)
        {
            altura=devolvealtura(i,ret);
            largura=devolvelargura(i,ret);
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
            dio=concatena (dio,resultado,&tamdio);
            return 0;
        }
    }

}
float distancia (char *ch,int ncirc,int nret,circulo *circ,retangulo *ret,char *dio)
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
    char *distanciachar;
    int tamdio=strlen(dio);
    distanciachar=malloc(6*sizeof(char));
    dio=malloc(((strlen(dio)+strlen(ch)+8)*sizeof(char)));
    dio=concatena (dio,ch,&tamdio);
    info=strtok(ch," ");
    j=atoi(info);
    info=strtok(ch," ");
    k=atoi(info);
        for(i=0;i<ncirc;i++)
    {
        nforma=devolveidcirculo(i,circ);
        if (j==nforma)
        {
            x1=devolvexcirculo(i,circ);
            y1=devolveycirculo(i,circ);
        }
    }
    for(i=0;i<nret;i++)
    {
        nforma=devolveidretangulo(i,ret);
            if (j==nforma)
        {
            x1=devolvexretangulo(i,ret);
            y1=devolveyretangulo(i,ret);
        }
    }
    for(i=0;i<ncirc;i++)
    {
        nforma=devolveidcirculo(i,circ);
        if (k==nforma)
        {
            x2=devolvexcirculo(i,circ);
            y2=devolveycirculo(i,circ);
        }
    }
    for(i=0;i<nret;i++)
    {
        nforma=devolveidretangulo(i,ret);
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
    sprintf(distanciachar,"%.4f",distance);
    for(i=0;i<6;i++)
    {
        dio[tamdio+i]=distanciachar[i];
    }
    dio[tamdio+i]="\n";
}