#include <stdio.h> 
#include <stdlib.h>

#include "EstruturaVetores.h"

int menu();

void dobrar(int *x);

int menu(){
    int opcao;
    printf("Digite as opção desejada\n0 - Sair\n1 - Inserir\n2 - Excluir\n3 - Listar uma estrutura\n4 - Dobrar Numero\n5 - \n");
    scanf("%d", &opcao);
    return opcao;
}

int main(){
    iniciar();
    int opcao2,sair = 0,ret;
    while (!sair){
        opcao2 = menu();
        switch (opcao2){
            case 0:{
                sair =1;
                finalizar();
                break;
            }
            case 1:{ //inserir
                //TODO
                ret = inserirNumeroEmEstrutura(25, 5);
                if (ret == s){
                	printf("Inserido com sucesso");
                }else if (ret == se){
                	printf("Sem Espaço");
                }else if (ret == sea){
                	printf("Sem estrutura Auxiliar");	
                }
                break;
            }
            case 2:{ //excluir
                //TODO
                break;
            }

            case 3:{ //recuperar dados estrutura auxiliar
                int posicao, retorno;
                printf("Qual a estrutura a ser listada (1..10)?");
                scanf("%d", &posicao);
                
                int qtd =  getQuantidadeElementosEstruturaAuxiliar(posicao);
                
                if (qtd == pi){
                    printf ("Posição inválida");
                }else{ // existe elemento
                    int vetorAux[1];
                    vetorAux[qtd];
                    retorno = getDadosEstruturaAuxiliar(posicao, vetorAux);
                    
                    if (retorno == s){
                        //imprimir para os dados para o usuário
                        int i = 0;
                        for (; i < qtd; i++){
                            printf ("%d", vetorAux[i]);
                            
                        }
                    }                        
                }
                break;
            }
            
            
            case 10:{ //dobrar
                //ler um numero
                int valor;
                scanf("%i", &valor);
                
                dobrar(&valor);
                //passar para um funcao (void dobrar(...)) que recebe o numero e dobra (EstruturaVetores.c)
                printf("%i", valor);   
                break;
            }
            default:{
                printf("opcao inválida\n");
            }   
        }   
    }
    return 0;
    
}
