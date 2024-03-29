// #################################################
//  Instituto Federal da Bahia
//  Salvador - BA
//  Curso de Análise e Desenvolvimento de Sistemas http://ads.ifba.edu.br
//  Disciplina: INF029 - Laboratório de Programação
//  Professor: Renato Novais - renato@ifba.edu.br

//  ----- Orientações gerais -----
//  Descrição: esse arquivo deve conter as questões do trabalho do aluno.
//  Cada aluno deve renomear esse arquivo para Aluno<MATRICULA>.c
//  O aluno deve preencher seus dados abaixo, e implementar as questões do trabalho

//  ----- Dados do Aluno -----
//  Nome:
//  email:
//  Matrícula:
//  Semestre:

//  Copyright © 2016 Renato Novais. All rights reserved.
// Última atualização: 20/06/2018 - 19/08/2016

// #################################################

#include <stdio.h>
#include <stdlib.h>

#include <ctype.h>
#include "lucas-bispo03052021-T1MATRICULA.h"

/*
	## função utilizada para testes  ##
	
	somar = somar dois valores
	@objetivo
    Somar dois valores x e y e retonar o resultado da soma
	@entrada
    dois inteiros x e y
	@saida
    resultado da soma (x + y)
*/
int somar(int x, int y)
{
    int soma = 0;
    soma = x + y;
    return soma;
}

/*
	## função utilizada para testes  ##
	
	fatorial = fatorial de um número
	@objetivo
    calcular o fatorial de um número
	@entrada
    um inteiro x
	@saida
    fatorial de x -> x!
*/
int fatorial(int x)
{ //função utilizada para testes
    int fat = 1;
    return fat;
}

/*
	Q1 = validar data
	@objetivo
    Validar uma data
	@entrada
    uma string data. Formatos que devem ser aceitos: dd/mm/aaaa, onde dd = dia, mm = mês, e aaaa, igual ao ano. dd em mm podem ter apenas um digito, e aaaa podem ter apenas dois digitos.
	@saida
    0 -> se data inválida
    1 -> se data válida
	@restrições
    Não utilizar funções próprias de string (ex: strtok)   
    pode utilizar strlen para pegar o tamanho da string
*/
int q1(char *d)
{
    int y, x; 
	
    //quebrar a string data em strings sDia, sMes, sAno
	int dv = 1; 
	
    int mf, df, af, nd, nm,na; 
	
    //quebrar a string data em strings sDia, sMes, sAno
	char sD[3],sM[3], sA[5];
	int i;
	
	for (i = 0; d[i] != '/'; i++){
		sD[i] = d[i];	
	}
	if(i == 1 || i == 2){ // testa se tem 1 ou dois digitos
		sD[i] = '\0';  // coloca o barra zero no final
	}else 
	return 0;
	
	
	int j = i + 1; //anda 1 cada para pular a barra
	i = 0;
	for (; d[j] != '/'; j++){
		sM[i] = d[j];
		i++;
	}
	
	if(i == 1 || i == 2){ // testa se tem 1 ou dois digitos
		sM[i] = '\0';  // coloca o barra zero no final
	}else
	return 0;
	
	
	j = j + 1; //anda 1 cada para pular a barra
	i = 0;
	
	for(; d[j] != '\0'; j++){
	 	sA[i] = d[j];
	 	i++;
	}
	
	if(i == 2 || i == 4){ // testa se tem 2 ou 4 digitos
		sA[i] = '\0';  // coloca o barra zero no final
	}else
	return 0;
	
	//imprimir os valores apenas para teste
	printf("---------------");
	printf("Data: %s\n", d);	
	printf("Dia: %s\n", sD);
	printf("Mes: %s\n", sM);
	printf("Ano: %s\n", sA);
	
	return 1; 
	
    //converter sDia, sMes e sAno em inteiros (ex: atoi)
	df=atoi(sD);
	mf=atoi(sM);
	af=atoi(sA);
	
    //criar as variáveis iDia, iMes, iAno
	
    switch (mf)
    {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		{
			if (df < 1 || df > 31)
			{
				return 0;
			}
			break;
		}
		case 4:
		case 6:
		case 9:
		case 11:
		{
			if (df < 1 || df > 30)
			{
				return 0;
			}
			break;
		}
		case 2:
		{
			if (df == 29 && (af/4==0))
			{
				
				return 1;
			}
			else if (df < 1 || df > 28)
			{
				return 0;
			}
			break;
		}
        default:
		return 0;
	}
	
	//validacao do ano
	if(af<1000||af>9999){
		return 0;
	}
	else{
		return 1;
	}
	//ano bissexto
	if((af%100==1&&af%4==0)||af%400==0){
		return 1;
	}
	else{
		return 0;
	}
	//printf("%s\n", data);
	
	if (dv){
		return 1;
	}
    
	else
    return 0;
}

/*
	Q2 = diferença entre duas datas
	@objetivo
    Calcular a diferença em anos, meses e dias entre duas datas
	@entrada
    uma string datainicial, uma string datafinal. Além disso, a função tem três parâmetros qtdDias, qtdMeses e qtdAnos. Esses três parâmetros devem ser utilizados para guardar os resultados dos cálculos. Na chamada da função deve passar o valor -1 para os três
	@saida
    1 -> cálculo de diferença realizado com sucesso
    2 -> datainicial inválida
    3 -> datafinal inválida
    4 -> datainicial > datafinal
*/
int q2(char *di, char *df, int *qtdD, int *qtdM, int *qtdA)
{
	
    //calcule os dados e armazene nas três variáveis a seguir
    int nD, nM, nA;
	
    if (q1(di) == 0)
	return 2;
	
    nD = 4;
    nM = 10;
    nA = 2;
	
    /*mantenha o código abaixo, para salvar os dados em 
		nos parâmetros da funcao
	*/
    *qtdD = nD;
    *qtdA = nA;
    *qtdM = nM;
	
    //coloque o retorno correto
    return 1;
}
void converteTextoParaMaiuscula(char *t)
{
    int i;
    for (i = 0; t[i] != '\0'; i++)
        t[i] = toupper(t[i]);
}
/*
	Q3 = encontrar caracter em texto
	@objetivo
    Pesquisar quantas vezes um determinado caracter ocorre em um texto
	@entrada
    uma string texto, um caracter c e um inteiro que informa se é uma pesquisa Case Sensitive ou não. Se isCaseSensitive = 1, a pesquisa deve considerar diferenças entre maiúsculos e minúsculos.
	Se isCaseSensitive != 1, a pesquisa não deve  considerar diferenças entre maiúsculos e minúsculos.
	@saida
    Um número n >= 0.
*/
int q3(char *t, char L, int iCS)
{
    int qtdO = 0;
    int i;

    if (iCS == 0)
    {
        converteTextoParaMaiuscula(t);
        L = toupper(L);
    }

    for (i = 0; t[i] != '\0'; i++)
    {
        if (t[i] == L)
        {
            qtdO++;
        }
    }

    return qtdO;
}

/*
	Q4 = encontrar palavra em texto
	@objetivo
    Pesquisar todas as ocorrências de uma palavra em um texto
	@entrada
    uma string texto base (strTexto), uma string strBusca e um vetor de inteiros (posicoes) que irá guardar as posições de início e fim de cada ocorrência da palavra (strBusca) no texto base (texto).
	@saida
    Um número n >= 0 correspondente a quantidade de ocorrências encontradas.
    O vetor posicoes deve ser preenchido com cada entrada e saída correspondente. Por exemplo, se tiver uma única ocorrência, a posição 0 do vetor deve ser preenchido com o índice de início do texto, e na posição 1, deve ser preenchido com o índice de fim da ocorrencias. Se tiver duas ocorrências, a segunda ocorrência será amazenado nas posições 2 e 3, e assim consecutivamente. Suponha a string "Instituto Federal da Bahia", e palavra de busca "dera". Como há uma ocorrência da palavra de busca no texto, deve-se armazenar no vetor, da seguinte forma:
	posicoes[0] = 13;
	posicoes[1] = 16;
	Observe que o índice da posição no texto deve começar ser contado a partir de 1.
	O retorno da função, n, nesse caso seria 1;
	
*/
int q4(char *strT, char *strB, int p[30])
{
    int qtdO = -1;
	
    return qtdO;
}

/*
	Q5 = inverte número
	@objetivo
    Inverter número inteiro
	@entrada
    uma int num.
	@saida
    Número invertido
*/

int q5(int n ){
	int x=0;
	int i=1;
	while(i<=n)
	{
		x*=10;
		x+=(n%(i*10)-n%i)/i;
		i*=10;
	}
	
	
	return x;
}
/*
	Q5 = ocorrência de um número em outro
	@objetivo
    Verificar quantidade de vezes da ocorrência de um número em outro
	@entrada
    Um número base (numerobase) e um número de busca (numerobusca).
	@saida
    Quantidade de vezes que número de busca ocorre em número base
*/
/*


int q6(int numerobase, int numerobusca)
{       
    int qtdOcorrencias;

    if(numerobase==0){
      return 0;
    }
    else if(numerobusca==(numerobase%10)){
     qt
      
    }




    return qtdOcorrencias;*/


//}


 /*3 - Escreva uma função recursiva que determine quantas vezes um dígito K ocorre em um número natural N.
 *  Por exemplo, o dígito 2 ocorre 3 vezes em 762021192.
#include<stdio.h>

int numero;
int aux=0;
int k=0;

int verifica(int n)
{
    if(n==0)
      return 0;
     else
    {
     if(aux==(n %10))
     {
        k++;
     }
     n=n / 10;
     return verifica(n);
    }
return 0;
}


int main()
{
   printf("Digite um numero:");
   scanf("%d",&numero);
   printf("Digite o numero a ser verificado:");
   scanf("%d",&aux);
   verifica(numero);
   printf("Vezes de numeros repetidos %d",k);
   return 0;
}


*/