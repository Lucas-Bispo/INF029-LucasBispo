include <stdio.h>
#include <stdlib.h>
main() {
 
    int numero,Dia,Mes,Ano,senha,m,d,c,u,senha2,idade;
    char vogal1,vogal2,vogal3;
   
 printf("Digite a data de nascimento com ate oito digitos:");
    scanf("%d",&numero);
    /*if(numero>99999999){
    printf("numeracao acima de oito digitos.");
    return 0;}*/
   
    Dia = numero / 1000000;
    Mes = (numero % 1000000)/10000;
    Ano = (numero % 1000000)%10000;
    //idade = 2019-Ano;  //printf("numero %d\n %d\n %d\n",Dia,Mes,Ano);
 
    if(Dia>31){
    
    printf("Data invalida.\n");
    return 0;
    
    }
   
    else if(Mes>12){
        printf("Data invalida.\n");
        return 0;
    }
 
 else if((Mes==2)&&(Dia>28)){
    printf("data invalida.\n");
    return 0;}
 
 else if((Dia>30)&&(Mes==4)||(Mes==6)||(Mes==9)||(Mes==11)){
 printf("data invalida.\n");
 return 0;}
 
 idade = 2019-Ano;
 
if((Dia>30)&&(Mes>=7)||(Dia<31)&&(Mes>=7))
idade=idade-1;
if(idade<18){
printf("nao e possivel continuar o desafio, pois voce e menor de idade %d anos\n",idade);
return 0;}
else
printf("Voce pode dar continuidade ao desafio, pois  possui %d anos\n",idade);

   
   
 printf("Iforme senha de quatro algarismos:");
 scanf("%d",&senha);
 
 m=senha/1000;
 c=(senha%1000)/100;
 d=((senha%1000)%100)/10;
 u=((senha%1000)%100)%10;
 
 
 //printf("%d %d %d %d",m,c,d,u);
 
 if((m==c)||(c==d)||(d==u)){
  printf("Voce digitou numero iguais.\n");
  return 0;
 }
 else
 printf("Parabens voce digitou valores diferentes.");
 fflush(stdin);
 
 printf("Digite a primeira vogal:");
 scanf("%c",&vogal1);
    fflush(stdin);
    printf("Digite a segunda vogal:");
    scanf("%c",&vogal2);
    fflush(stdin);
    printf("Digite a tercira vogal");
    scanf("%c",&vogal3);
 fflush(stdin);
 
 if(((vogal1=='a')||(vogal1=='e')||(vogal1=='i')||(vogal1=='o')||(vogal1=='u')||(vogal1=='A')||(vogal1=='E')||(vogal1=='I')||(vogal1=='O')||(vogal1=='U'))&&((vogal2=='a')||(vogal2=='e')||(vogal2=='i')||(vogal2=='o')||(vogal2=='u')||(vogal2=='A')||(vogal2=='E')||(vogal2=='I')||(vogal2=='O')||(vogal2=='U'))&&((vogal3=='a')||(vogal3=='e')||(vogal3=='i')||(vogal3=='o')||(vogal3=='u')||(vogal3=='A')||(vogal3=='E')||(vogal3=='I')||(vogal3=='O')||(vogal3=='U'))){
    if((vogal1!=vogal2)&&(vogal2!=vogal3)&&(vogal1!=vogal3))
    printf("Voce digitou tres vogais e sao diferentes.");
    else
    printf("Voce nao acertou e digitou uma cosoante ou vogal repetida.\n");
 }
    else if(((vogal1!='a')||(vogal1!='e')||(vogal1!='i')||(vogal1!='o')||(vogal1!='u')||(vogal1!='A')||(vogal1!='E')||(vogal1!='I')||(vogal1!='O')||(vogal1!='U'))&&((vogal2!='a')||(vogal2!='e')||(vogal2!='i')||(vogal2!='o')||(vogal2!='u')||(vogal2!='A')||(vogal2!='E')||(vogal2!='I')||(vogal2!='O')||(vogal2!='U'))&&((vogal3!='a')||(vogal3!='e')||(vogal3!='i')||(vogal3!='o')||(vogal3!='u')||(vogal3!='A')||(vogal3!='E')||(vogal3!='I')||(vogal3!='O')||(vogal3!='U')))
    printf("Voce nao acertou e digitou uma cosoante ou vogal repetida.\n");
 
 printf("Informe a senha:");
 scanf("%d",senha);
 
 printf("Informe segunda senha para validar:");
 scanf("%d",senha2);
 
 
 
 if(senha==senha2)
 printf("Infelizmente nao foi possivel alcancar todas as etapas senhas digitadas sao iguais\n.");
 else
 printf("Parabéns, você alcançou todas as etapas e receberá o prêmio.");
}
