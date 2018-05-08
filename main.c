#include <stdio.h>
#include <stdlib.h>

#include "learq.h"
#include "args.h"

void main (int argc,char *argv[])
{
    char *entrada,*saida;
    verific(entrada,saida,argc,argv);
    learq(entrada,saida);
}