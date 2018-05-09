#ifndef FUNCOES_H
#define FUNCOES_H

#include "circulo.h"
#include "retangulo.h"


void ncirculo (int *ndefault,char *ch);    /*altera o numero maximo de circulos*/
void sobreposicao (char *ch,int ncirc,int nret,circulo *circ,retangulo *ret);    /*as formas geometricas j e k se sobrepoe?*/
int pontointerno (char *ch,int ncirc,int nret,circulo *circ,retangulo *ret); /*verifica se o ponto(x,y) é interno a forma j*/
float distancia (char *ch,int ncirc,int nret,circulo *circ,retangulo *ret);      /*distancia entre as formas j e k*/

#endif
