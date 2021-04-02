#include <stdio.h>
#include <string.h>
//Struct -> estrutura

typedef struct st_aluno{
	char sexo[1];
	char nome[20];
	char cpf[10];
	int ano_nascimento;
}S;

S cadastrarCliente(S st_aluno){
    S aluno1;

	printf("Informe a matrícula do aluno: ");
	fgets(aluno1.sexo, 10, stdin);

	printf("Informe o nome do aluno: ");
	fgets(aluno1.nome, 100, stdin);

	printf("Informe o curso do aluno: ");
	fgets(aluno1.cpf, 10, stdin);

	printf("Informe o ano de nascimento do aluno: ");
	scanf("%d", &aluno1.ano_nascimento);

	printf("============ Dados do Aluno ==============\n");
	printf("Matrícula: %s\n", aluno1.sexo);
	printf("Nome: %s\n", aluno1.nome);
	printf("CPF: %s\n", aluno1.cpf);
	printf("Ano de nascimento: %d\n", aluno1.ano_nascimento);

	return aluno1;


}

void validarNome(S s){
    
    if (strlen(s.nome) <= 20){
        printf("Nome Valido!!!\n");
    }else{
        printf("Invalido");
    }
}


void validarsexo(S s){


    if(s.sexo == 'm'|| s.sexo == 'M'){

    printf("sexo: masculino\n");

    }

    else if(s.sexo == 'm'|| s.sexo == 'M'){
    printf("sexo:feminino\n");
    }

    else 
    printf("sexo:outro\n");


}

void validarCPF(S s){
    
    if (strlen(s.cpf) <= 10){
        printf("CPF Valido!!!\n");
    }else{
        printf("Invalido");
    }
}

void validarData(S s){
    int num,Dia,Mes,Ano, idade;

    Dia = num / 1000000;
    Mes = (num % 1000000)/10000;
    Ano = (num % 1000000)%10000;

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
    return 0;
    
    }

    else if((Dia>30)&&(Mes==4)||(Mes==6)||(Mes==9)||(Mes==11)){
        printf("data invalida.\n");
        return 0;
    }
 
    idade = 2019-Ano;
 
    if((Dia>30)&&(Mes>=7)||(Dia<31)&&(Mes>=7))
    idade=idade-1;
    
    if(idade<18){
    printf("nao e possivel continuar o desafio, pois voce e menor de idade %d anos\n",idade);
    return 0;
    
    }

    else
    printf("Voce pode dar continuidade ao desafio, pois  possui %d anos\n",idade);

}



int main(){

    S p, y;

    y =  cadastrarCliente(p);

    printf("Nome: %s\n", y.nome);
    printf("Sexo: %s\n",y.sexo);
    printf("CPF: %d\n",y.cpf);
	
}