#ifndef ARQUIVO_H
#define ARQUIVO_H

char criaarq (char *nomebase,char *ch,char *sufixo);     /*cria arq svg*/
void escrevearq (char *nomearq,FILE *arquivo); /*escreve dados no arquivo*/
void finalarq ();   /*final do arquivo. finaliza programa*/

#endif
