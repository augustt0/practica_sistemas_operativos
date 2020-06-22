#include <stdio.h>
#include <stdlib.h>
void nasi(void);
int main()
{
    nasi();
    printf("Hola como estas estoy probando github");
    printf("Y que te esta pareciondo github?");
    printf("ME parece un herramienta util para poder programar");
    return 0;
}

void nasi()
{
    int r;
    printf("modificado en la BranchNasi");

    r= 3+3;
    printf("%d", r);
}
