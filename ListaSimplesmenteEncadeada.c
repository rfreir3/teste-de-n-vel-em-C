/*1) Considere listas encadeadas de valores inteiros e implemente uma função para
retornar o número de nós da lista que possuem o campo info com valores
maiores do que n. Essa função deve obedecer ao protótipo: int maiores(Lista* l, int n);
2) Implemente uma função que tenha como valor de retorno o ponteiro para o
último nó de uma lista encadeada. Essa função deve obedecer ao protótipo:
Lista* ultimo(Lista* l);*/

#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
    int info;
    struct lista* next;
}Lista;

Lista* ultimo(Lista* l){
    Lista* aux= l;
    while(aux->next==NULL){
        aux=aux->next;
        if(aux->next!=NULL){
            break;
        }
    }
    printf("\nValor: %d\n", aux->info);
    return(aux);
}

Lista* insere_no(Lista* l, int n){
    Lista* novo=(Lista*) malloc(sizeof(Lista));
    novo->info=n;
    novo->next=l;
    return(novo);
}

int maior(Lista* l, int c){
    Lista* p;
    int k=0;
    for(p=l;p!=NULL;p=p->next){
        if(p->info>c){
            k++;
        }
    }
    return k;
}

int main(){
    Lista* l = NULL;
    Lista* p;
    int a, c=0;
    l = insere_no(l, 4);
    l = insere_no(l, 4);
    l = insere_no(l, 3);
    l = insere_no(l, 19);
    a =maior(l, c);
    printf("Existem %d valores maiores que %d.\n", a, c);
    p = ultimo(l);
    printf("Informacao do ultimo no: %p", p);
    return(0);
}
