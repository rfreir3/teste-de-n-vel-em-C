#include <stdio.h>
#include <locale.h>

float media(int n, float* v);

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num;
    float vet[num], med;
    printf("Informe quantos números deseja adicionar: ");
    scanf("%d", &num);
    for(int i=0;i<num;i++){
        printf("Informe o %dº número:\n", i+1);
        scanf("%f", &vet[i]);
    }
    med=media(3, vet);
    printf("Média: %.1f", med);
    return(0);
}

float media(int n, float* v){
    float s=0.0f;
    for(int i=0;i<n;i++){
        s+=v[i];
    }
    return(s/n);
}
