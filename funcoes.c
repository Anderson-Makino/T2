#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "funcoes.h"
#include "circulo.h"
#include "retangulo.h"

void ncirculo (int *ndefault,char *ch)
{
    *ndefault=atoi(ch);
}

void sobreposicao (char *ch,int ncirc,int nret)
{
    char *info;
    char *nforma;
    int j,k;
    int raioj=0,alturaj=0,larguraj=0;
    int raiok=0,alturak=0,largurak=0;
    int xj,yj;
    int xk,yk;
    info=strtok(ch,' ');
    j=atoi(info);
    info=strtok(ch,' ');
    k=atoi(info);
        for(i=0;i<ncirc;i++)
    {
        nforma=devolveidcirculo(i);
        if (j==nforma)
        {
            raioj=devolveraio(i);
            xj=devolvexcirculo(i);
            yj=devolveycirculo(i);
        }
    }
    for(i=0;i<nret;i++)
    {
        nforma=devolveretangulo(i);
            if (j==nforma)
        {
            alturaj=devolvealtura(i);
            larguraj=devolvelargura(i);
            xj=devolvexretangulo(i);
            yj=devolveyretangulo(i);
        }
    }
    for(i=0;i<ncirc;i++)
    {
        nforma=devolveidcirculo(i);
        if (k==nforma)
        {
            raiok=devolveraio(i);
            xk=devolvexcirculo(i);
            yk=devolveycirculo(i);
        }
    }
    for(i=0;i<nret;i++)
    {
        nforma=devolveretangulo(i);
            if (k==nforma)
        {
            alturak=devolvealtura(i);
            largurak=devolvelargura(i);
            xk=devolvexretangulo(i);
            yk=devolveyretangulo(i);
        }
    }

}

int pontointerno (char *ch,int ncirc,int nret)
{
    char *info;
    int id,i;
    char *nforma; /*ID da forma geometrica*/
    int raio,altura,largura;
    int x,y;
    int xforma,yforma; /*coordenadas do centro da figura geometrica*/
    char *resultado,funcao=i; /*resultado da funcao (se é ou nao ponto interno)*/
    resultado=(char *) malloc(3*sizeof(char));
    info=strtok(ch,' ');
    id=atoi(info);
    info=strtok(ch,' ');
    x=atof(info);
    info=strtok(ch,' ');
    y=atof(info);
    for(i=0;i<ncirc;i++)
    {
        nforma=devolveidcirculo(i);
        if (id==nforma)
        {
            raio=devolveraio(i);
            xforma=devolvexcirculo(i);
            yforma=devolveycirculo(i);
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
        nforma=devolveretangulo(i);
            if (id==nforma)
        {
            altura=devolvealtura(i);
            largura=devolvelargura(i);
            xforma=devolvexretangulo(i);
            yforma=devolveyretangulo(i);
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
void distancia (char *ch)
{
    char *info;
    int j,k;
}