#ifndef TRABALHO2_ESTRUTURAVETORES_H
#define TRABALHO2_ESTRUTURAVETORES_H

// enumeracoes (enum) ajudam a deixar o codigo mais legivel, possibilitando que voce de significado
// as suas constantes, para mais informacoes https://en.cppreference.com/w/c/language/enum
// as constantes do enum em sua inicialização vao representar o numero resultante da soma do valor da
// constante anterior mais 1, caso nao haja valor algum na primeira constante ela vai ser inicializada com 0
enum
{
  teav = -11,nti,ni,eav,ti,sedm,pi,jtea,sea,se,s
};

typedef struct reg
{
  int conteudo;
  struct reg *prox;
} No;

int cEA(int posi, int tamanho);
int iNEE(int posi, int valor);
int eNDFE(int posi);
int eNEDE(int posi, int valor);
int gDEA(int posi, int vetorAux[]);
int gDOEA(int posi, int vetorAux[]);
int gDDTEA(int vetorAux[]);
int gDOrDTEA(int vetorAux[]);
int mTEA(int posi, int novoTamanho);
int gQEEA(int posi);
No *moLECC();
void gDLECC(No *inicio, int vetorAux[]);
void dLECC(No **inicio);

void i();
void f();
void d(int *x);

#endif // TRABALHO2_ESTRUTURAVETORES_H