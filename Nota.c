/*Questão 2) Escreva um programa para corrigir provas de múltipla escolha. Cada prova tem N
questões e cada questão vale 10/N pontos. Os primeiros dados a serem lidos são o número de
questões e o gabarito da prova. Em seguida, serão lidas as respectivas respostas de um total de
10 alunos matriculados. Calcule e mostre:
a) a nota obtida para cada aluno;
b) a porcentagem de aprovação, sabendo-se que a nota mínima para ser aprovado é 6.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Função de comparação do gabarito com as respostas dos alunos;
float comparar(char *gabarito, char *alunos, int x){
	int i;
	float y=0;
	for(i=0;i<x;i++){
		if(alunos[i]==gabarito[i]){
			y+=10;
		}
	}
	return y;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	int questoes, i, j;
	float nota=0, porcentagem=0;
	
	//delimitação do tamanho dos vetores;
	printf("Quantidade de questões: ");
	scanf("%d", &questoes);
	
	//alocação de variáveis; 
	char *gabarito, *alunos;
	gabarito=(char*)malloc(questoes*sizeof(char));
	if(gabarito==NULL){
		printf("Erro!");
		exit(1);
	}
	alunos=(char*)malloc(questoes*sizeof(char));
	if(alunos==NULL){
		printf("Erro!");
		exit(1);
	}
	
	//inserindo gabarito da prova;
	for(i=0;i<questoes;i++){
		printf("\nDigite a resposta da %dª questão: ", i+1);
		scanf("%s", &gabarito[i]);
	}
	
	//definindo respostas;
	for(i=0;i<10;i++){
		printf("\nAgora digite as respostas do %dº aluno.", i+1);
		for(j=0;j<questoes;j++){
			printf("\n%dª resposta: ", j+1);
			scanf("\n%s", &alunos[j]);	
		}
		nota=comparar(gabarito, alunos, questoes);
		printf("\nNota: %.2f", nota/questoes);
		if(nota>=6){
			porcentagem+=1;
		}
	}
	//calculando porcentagem.
	printf("\nPorcentagem de aprovação: %.1f%%", (porcentagem/10)*100);
	free(gabarito);
	free(alunos);
	return(0);
}
