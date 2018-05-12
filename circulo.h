#ifndef CIRCULO_H
#define CIRCULO_H

typedef struct circulo{
    int i;       /*indentificador*/
    float x,y;   /*coordenadas*/
    float r;      /*raio do circulo*/
    char *cor1,*cor2;    /*cor da borda e do preenchimento*/
}circulo;

void indentificacirculo (char *ch,char *info,int ncirc,circulo *circ);

void pegacorcirculo(char *ch,char *info,int ncirc,circulo *circ);

void pegaraio(char *ch,char *info,int ncirc,circulo *circ);

void pegacoordenadascirculo(char *ch,char *info,int ncirc,circulo *circ);

int devolvestrlencor1circulo(int j,circulo *circ);

int devolvestrlencor2circulo(int j,circulo *circ);

char *devolvecor1circulo(int j,circulo *circ);

char *devolvecor2circulo(int j,circulo *circ);

float devolveraio(int j,circulo *circ);

int devolveidcirculo(int j,circulo *circ);

float devolvexcirculo(int j,circulo *circ);

float devolveycirculo(int j,circulo *circ);

circulo *criacirculo (char *ch,int ncirc);

#endif