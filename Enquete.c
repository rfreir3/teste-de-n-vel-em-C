// Questão 1) Uma empresa fez uma pesquisa para saber se as pessoas gostaram ou não de um
// novo produto. Um número N de pessoas de ambos os sexos foi entrevistado, e o questionário
// consistia em apenas duas perguntas: (i) o sexo do entrevistado (M/F) e (ii) sua opinião sobre o
// produto (gostou/não gostou). Escreva um programa em C que:
// a) leia as respostas contidas no questionário e armazene-as em dois arrays vinculados,
// um deles contendo a resposta para a primeira pergunta e o outro contendo a resposta
// para a segunda pergunta.
// b) determine a porcentagem de pessoas do sexo feminino que responderam que
// gostaram do produto.
// c) determine a porcentagem de pessoas do sexo masculino que responderam que não
// gostaram do produto.

#include <stdio.h>
#include <locale.h>

typedef struct questionario{
	char genero, avaliacao;
}Questionario;

int main(){
	setlocale(LC_ALL, "Portuguese");
	Questionario Questionario;
	int qntd, contMN=0, contFS=0, i;
	float contM=0, contF=0;
	printf("Digite a quantidade de pessoas que irão responder esse questionário:\n");
	scanf("%d", &qntd);
	for(i=0;i<qntd;i++){
		printf("Digite o seu gênero ([M]asculino ou [F]eminino):\n");
		scanf("%s", &Questionario.genero);
		printf("Gostou do produto? ([S]im ou [N]ão?):\n");
		scanf("%s", &Questionario.avaliacao);
		if(Questionario.genero=='M'){
			contM+=1;
			if(Questionario.avaliacao=='N'){
			contMN+=1;
			}
		}
		else if(Questionario.genero=='F'){
			contF+=1;
			if(Questionario.avaliacao=='S'){
				contFS+=1;
			}
		}
	}
	printf("Total de pessoas do sexo masculino que não gostaram do produto: %d\nPorcentagem: %.1f%%\n", contMN, ((contMN/contM)*100));
	printf("Total de pessoas do sexo feminino que gostaram do produto: %d\nPorcentagem: %.1f%%\n", contFS, ((contFS/contF)*100));
	return(0);
}
