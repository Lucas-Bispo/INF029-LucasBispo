#include <stdio.h>


int soma(int num1, int num2){
	int res = num1 + num2;
	return res;
}

int main(int argc, char const *argv[])
{
    /* code */
    int x,y,z;
    printf("Valor 1:\n");
    scanf("%d",&x);

    printf("Valor 1:\n");
    scanf("%d",&y);

    z = soma(x,y);

    printf("Resultado",z);
    return 0;
}
