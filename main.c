#include <stdio.h>
#include <stdlib.h>

#include "learq.h"
#include "args.h"

int main (int argc,char *argv[])
{
    char *entrada,*diretorio;
    entrada=verificf(entrada,argc,argv);
    diretorio=verifico(diretorio,argc,argv);
    learq(entrada,diretorio);

    return 0;
}