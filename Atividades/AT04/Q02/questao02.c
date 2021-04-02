#include <stdio.h>

int subtrai(int num1, int num2, int num3){
	int res = num1 - num2 - num3;
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

    printf("Valor 1:\n");
    scanf("%d",&z);

    int res = subtrai(x,y,z);

    printf("Resultado",res);
    return 0;
}