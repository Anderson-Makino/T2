#ifndef FUNCOES_H
#define FUNCOES_H

/*i=um inteiro*/
/* j e k=indentificadores*/
/*w e h=largura e altura do retangulo*/
/*r=raio do circulo*/
/*cor1=cor da borda
cor2=cor do preenchimento*/

void ncirculo (int *ndefault,char *ch);    /*altera o numero maximo de circulos*/
void sobreposicao (char *ch,int ncirc,int nret);    /*as formas geometricas j e k se sobrepoe?*/
int pontointerno (char *ch,int ncirc,int nret); /*verifica se o ponto(x,y) é interno a forma j*/
void distancia (char *ch);      /*distancia entre as formas j e k*/

#endif
