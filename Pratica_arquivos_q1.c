#include <stdio.h>
#include <string.h>

int main(void){
    FILE * arquivo_entrada;
    FILE * arquivo_saida; 
    float nota1, nota2, nota3, media=0;
    char nome[100], linha[100];
    arquivo_entrada = fopen("entrada_q3.txt", "r");
    if(arquivo_entrada == NULL){
        printf("Erro ao abrir o arquivo");
        return(1);
    }
    arquivo_saida = fopen("saida_q3.txt", "w");
    if(arquivo_saida==NULL){
        printf("Erro ao abrir o arquivo"); 
        exit(1); 
    }
    while(fgets(linha,100,arquivo_entrada) != NULL){
        sscanf(linha, "%20[^\t]\t%f\t%f\t%f", nome, &nota1, &nota2, &nota3);
        media = (nota1 + nota2 + nota3)/3;
        fprintf(arquivo_saida, "%s\t%.1f\t %s\n", nome, media, (media>=7.0)?"aprovado":"reprovado");
    }
    fclose(arquivo_entrada);
    fclose(arquivo_saida);
    return (0);
}
