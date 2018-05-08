#include <stdio.h>
#include <stdlib.h>
#include <string.h>



char criaarq (char *nomebase,char *ch,char *sufixo)
{
    int i,j=0;
    int id;
    char *info;
    info=strtok(ch," ");
    id=atoi(info);
    info=strtok(ch," ");
    sufixo=(char *) malloc((strlen(nomebase)+1)+(strlen(info)+6)*sizeof(char));
    for(i=0;i<strlen(nomebase);i++)
    {
        sufixo[j]=nomebase[i];
        j++;
    }
    sufixo[j]='-';
    j++;
    for(i=0;i<strlen(info);i++)
    {
        sufixo[j]=info[i];
        j++;
    }
    sufixo[j]='.';
    j++;
    sufixo[j]='s';
    j++;
    sufixo[j]='v';
    j++;
    sufixo[j]='g';
    return (sufixo);
}

void escrevearq (char *nomearq,FILE *arquivo)
{

}
void finalarq ()
{
    
}