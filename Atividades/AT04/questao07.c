#include <stdio.h>
// Rever depois questão 7 na lista e revisar strings
void ler3Palavras(char p1[], char p2[], char p3[]){
    
    
    printf("Digite seu nome: ");
    gets(p1);

    printf("Digite seu nome: ");
    gets(p2);
    
    printf("Digite seu nome: ");
    gets(p3);  
    
    printf("O nome armazenado foi: %s", p1);
    printf("O nome armazenado foi: %s", p2);
    printf("O nome armazenado foi: %s", p3);


}

int main(int argc, char const *argv[])
{
    /* code */
    char p1[60],p2[60],p3[60];

    ler3Palavras(p1, p2, p3);

    return 0;
}
