#include <stdio.h>

int main(){
	int vet[10];
	int compmaior=vet[0];
	int compmenor=vet[0];
	float media;
	FILE* AA= fopen("gakinha.txt","wt"); //entrada
	if(AA==NULL){
		printf("Erro na abertura de arquivo!\n");
		return (1);
	}
	FILE* AS= fopen("gakinha1.txt", "wt"); //saida
	if(AS==NULL){
		printf("Erro no fechamento do arquivo!\n");
		return (1);
	}
	while(fgets(vet,10,AA) != NULL){
		if(compmenor>vet){
			compmenor=vet;
		}
		else if(compmaior<vet){
			compmaior=vet;
		}
		media+=vet;
		fprintf(AS, "Maior numero: %d\nMenor numero: %d\n Media: %f", compmaior, compmenor, media/10);
	}
	return(0);
}
