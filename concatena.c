#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "concatena.h"

char concatena(char *stringmain,char *stringconcatena,int *stringlen)
{
    int i;
    for(i=0;i<strlen(stringconcatena);i++)
    {
        stringmain[*stringlen+i]=stringconcatena[i];
    }
    stringmain[*stringlen+i]="\n";
    *stringlen=stringlen+strlen(stringconcatena);
    return (stringmain);
}