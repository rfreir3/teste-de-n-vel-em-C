#include <stdio.h>
#include <stdlib.h>

int main(){
	int vet[10];
	char linha[100];
	int n=0, compmaior, compmenor;
	float media;
	FILE* arq=fopen ("entrada.txt", "rt");
	FILE* arq1=fopen ("saida.txt", "wt");
	if(arq==NULL){
		printf("Erro na abertura de arquivo de entrada!\n");
		return(1);
	}
	if(arq1==NULL){
		printf("Erro na abertura de arquivo de saida!\n");
		fclose(arq);
		return (1);
	}
	
	while(fgets(linha, 100, arq) != NULL){
		media+=vet[n];
		if(compmaior<vet[n]){
			compmaior=vet[n];
		}
		else if(compmenor>vet[n]){
			compmenor=vet[n];
		}
		n++;
	}
	fprintf(arq1, "Maior digito: %d\nMenor digito: %d\nMedia: %f\n", compmaior, compmenor, media/10);
	fclose(arq1);
	fclose(arq);
	return (0);
}
