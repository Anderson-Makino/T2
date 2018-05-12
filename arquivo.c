#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "arquivo.h"
#include "circulo.h"
#include "retangulo.h"

char criaarq (char *diretorio,char *nomebase,char *ch,char *sufixo)
{
    int i,j=0;
    int id;
    char *info;
    info=strtok(ch," ");
    id=atoi(info);
    info=strtok(ch," ");
    sufixo=(char *) malloc((strlen(diretorio)+(strlen(nomebase)+1)+(strlen(info)+6))*sizeof(char));
    for(i=0;i<strlen(diretorio);i++)
    {
        sufixo[j]=diretorio[i];
        j++;
    }
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
    j++;
    sufixo[j]='\0';
    return (sufixo);
}

void iniciasvg(FILE *sig,char *nomebase)
{
    char *nomearq;
    int i,j=0,tamanho=strlen(nomebase);
    nomearq=malloc(sizeof(char)*(tamanho+5));
    for(i=0;i<tamanho;i++)
    {
        nomearq[j]=nomebase[i];
        j++;
    }
    nomearq[j]='.';
    j++;
    nomearq[j]='s';
    j++;
    nomearq[j]='v';
    j++;
    nomearq[j]='g';
    j++;
    nomearq[j]='\0';
    sig=fopen(nomearq,"w");
    if (sig==NULL)
	{
	printf("erro ao abrir o arquivo");
	exit (0);
	}
    fputs("<svg>",sig);
}

void terminasvg(FILE *sig)
{
    fputs("</svg>",sig);
    fclose(sig);
}

void escrevesvgcirc (FILE *sig,int ncirc,circulo *circ)
{
    char *cor1,*cor2;
    float raio,x,y;
    int tam1,tam2;
    tam1=devolvestrlencor1circulo(ncirc,circ);
    tam2=devolvestrlencor2circulo(ncirc,circ);
    cor1=malloc(sizeof(char)*(tam1+1));
    cor2=malloc(sizeof(char)*(tam2+1));
    strcpy(cor1,devolvecor1circulo(ncirc,circ));
    strcpy(cor2,devolvecor2circulo(ncirc,circ));
    raio=devolveraio(ncirc,circ);
    x=devolvexcirculo(ncirc,circ);
    y=devolveycirculo(ncirc,circ);
    fprintf(sig,"<circle cx=%f cy=%f r=%f  stroke-width=3 stroke=%s fill=%s/>\n",x,y,raio,cor1,cor2);
}

void escrevesvgquad (FILE *sig,int nret,retangulo *ret)
{
    char *cor1,*cor2;
    float altura,largura,x,y;
    int tam1,tam2;
    tam1=devolvestrlencor1retangulo(nret,ret);
    tam2=devolvestrlencor2retangulo(nret,ret);
    cor1=malloc(sizeof(char)*(tam1+1));
    cor2=malloc(sizeof(char)*(tam2+1));
    strcpy(cor1,devolvecor1retangulo(nret,ret));
    strcpy(cor2,devolvecor2retangulo(nret,ret));
    altura=devolvealtura(nret,ret);
    largura=devolvelargura(nret,ret);
    x=devolvexretangulo(nret,ret);
    y=devolveyretangulo(nret,ret);
    fprintf(sig,"<rect x=%f y=%f width=%f height=%f stroke=%s fill=%s/></rect>\n",x,y,largura,altura,cor1,cor2);
}

void finalarq ()
{
    
}