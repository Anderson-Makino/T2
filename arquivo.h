#ifndef ARQUIVO_H
#define ARQUIVO_H

#include "circulo.h"
#include "retangulo.h"

char criaarq (char *diretorio,char *nomebase,char *ch,char *sufixo);     /*cria arq svg*/
void iniciasvg (FILE *sig,char *nomebase);  /*cria arquivo svg*/
void terminasvg(FILE *sig);   /*finaliza e fecha arquivo svg*/
void escrevesvgcirc (FILE *sig,int ncirc,circulo *circ); /*escreve dados do circulo no arquivo*/
void escrevesvgquad (FILE *sig,int nret,retangulo *ret); /*escreve dados do quadrado no arquivo*/
void finalarq ();   /*final do arquivo. finaliza programa*/

#endif
