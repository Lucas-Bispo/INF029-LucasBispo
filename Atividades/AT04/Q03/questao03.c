#include <stdio.h>

int fat(int n){
int fat;
if (n >= 0) {
    int fat = 1;
    while (n > 0) {
        fat *= n;
        n--;
    }
    return fat;
} else {
    return -1;
}
}



int main(){
    int n;
    printf("Insira um valor para o qual deseja calcular seu fatorial: ");
    scanf("%d", &n);
 
    fat(n);
 
return 0;
}