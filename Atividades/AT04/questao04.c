#include <stdio.h>

int ler3Numeros(int vet[]){
    
    for(int i; i<2; i++){
        printf("Insera o numero:");
        scanf("%d",&vet[i]);
    }
    return vet;
}


int main(int argc, char const *argv[])
{
    /* code */
    int vet[2];

    for(int i; i<2; i++){
        printf("numero [%d]:",ler3Numeros(vet[i]));
    }

    

    return 0;
}
