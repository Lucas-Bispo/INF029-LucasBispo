#include <stdio.h>
#include <string.h>
//Struct -> estrutura

typedef struct st_aluno{
	char sexo[1];
	char nome[100];
	int cpf;
	int ano_nascimento;
}S;

S cadastrarCliente(S st_aluno){
    S aluno1;

	printf("Informe a matrícula do aluno: ");
	fgets(aluno1.sexo, 10, stdin);

	printf("Informe o nome do aluno: ");
	fgets(aluno1.nome, 100, stdin);

	printf("Informe o curso do aluno: ");
	scanf("%d", &aluno1.cpf);

	printf("Informe o ano de nascimento do aluno: ");
	scanf("%d", &aluno1.ano_nascimento);

	printf("============ Dados do Aluno ==============\n");
	printf("Matrícula: %s\n", aluno1.sexo);
	printf("Nome: %s\n", aluno1.nome);
	printf("Curso: %d\n", aluno1.cpf);
	printf("Ano de nascimento: %d\n", aluno1.ano_nascimento);

	return aluno1;


}

int main(){

    S p, y;

    y =  cadastrarCliente(p);

    printf("Nome: %s\n", y.nome);
    printf("Sexo: %s\n",y.sexo);
    printf("CPF: %d\n",y.cpf);
	
}