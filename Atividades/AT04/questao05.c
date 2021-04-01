#include <stdio.h>
#include <stdlib.h>

typedef struct s{
    int num[3];
} S;

int ler4Numeros(S s){
    int i;

    for (i = 0; i < 3; i++)
    {
        /* code */
        printf("Inserir  numero:");
        scanf("%d",&s.num[i]);
    }
   
}

int main(int argc, char const *argv[])
{
    /* code */
    S x;
    
    ler4Numeros(x);

    return 0;
}
