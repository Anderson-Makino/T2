#ifndef RETANGULO_H
#define RETANGULO_H

typedef struct retangulo{
    int i;
    float x,y;    /*coordenadas*/
    float w,h;      /*largura e altura do retangulo*/
    char *cor1,*cor2;    /*cor da borda e do preenchimento*/
}retangulo;

void indentificaretangulo (char *ch,char *info,int nret,retangulo *ret);

void pegacorretangulo(char *ch,char *info,int nret,retangulo *ret);

void pegadimensao(char *ch,char *info,int nret,retangulo *ret);

void pegacoordenadasretangulo(char *ch,char *info,int nret,retangulo *ret);

int devolvestrlencor1retangulo(int j,retangulo *ret);

int devolvestrlencor2retangulo(int j,retangulo *ret);

int devolveidretangulo(int j,retangulo *ret);

char *devolvecor1retangulo(int j,retangulo *ret);

char *devolvecor2retangulo(int j,retangulo *ret);

float devolvealtura(int j,retangulo *ret);

float devolvelargura(int j,retangulo *ret);

float devolvexretangulo(int j,retangulo *ret);

float devolveyretangulo(int j,retangulo *ret);

retangulo *criaretangulo (char *ch,int nret,char *svg);

#endif
