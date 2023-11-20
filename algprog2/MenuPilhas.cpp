#include <stdio.h>
#include <stdlib.h>

struct pilha{
    int key;
    pilha *next;
};

void Empilha(int val, pilha **begin){
    pilha *novo = new pilha();
    novo->key = val;
    novo->next = *begin;
    *begin = novo;
}

int Desempilha(pilha **begin){
    int aux;
    pilha *novo = new pilha();
    novo = *begin;
    *begin = novo->next;
    aux = novo->key;
    free(novo);
    return(aux);
}

int Conta(pilha *begin){
    int qnt = 1;
    pilha *aux = begin;
    if(begin == NULL)
        return 0;
    while(aux->next != NULL){
        qnt++;
        aux = aux->next;
    }
    return qnt;
}

void ImprimeA(pilha *begin){
    pilha *aux = begin;
    while(aux->next != NULL){
        printf("%d\n", aux->key);
        aux = aux->next;
    }
    printf("%d\n", aux->key);
}

void ImprimeB(pilha *begin){
    pilha *aux = begin;
    pilha *begin2 = new pilha();
    begin2 = NULL;
    pilha *aux2 = begin2;
    aux = begin;
    while(aux->next != NULL){
        Empilha(aux->key, &begin2);
        aux = aux->next;
    }
    Empilha(aux->key, &begin2);
    
    aux2 = begin2;
    while(aux2->next != NULL){
        printf("%d\n", aux2->key);
        aux2 = aux2->next;
    }
    printf("%d\n", aux2->key);
    
    aux2 = begin2;
    while(aux2 != NULL){
        free(begin2);
        pilha *begin2 = new pilha();
        begin2 = aux2;
        aux2 = aux2->next;
    }
    free(aux2);
}

void Reverse(pilha **begin){
    pilha *aux = *begin;
    pilha *begin2 = new pilha();
    begin2 = NULL;
    pilha *aux2 = begin2;
    while(aux->next != NULL){
        Empilha(aux->key, &begin2);
        aux = aux->next;
    }
    Empilha(aux->key, &begin2);

    aux2 = begin2;
    aux = *begin;
    while(aux2->next != NULL){
        aux->key = aux2->key;
        aux = aux->next;
        aux2 = aux2->next;
    }
    aux->key = aux2->key;
    
    aux2 = begin2->next;
    while(aux2->next != NULL){
        free(begin2);
        begin2 = aux2;
        aux2 = aux2->next;
    }
    free(aux2);
}


int main(){
    int escolha, val;
    pilha *begin = new pilha();
    begin = NULL;
    

    do{    
        printf("Digite o numero da opcao desejada:\n");
        printf("Finalizar Programa - 0\nEmpilha - 1\nDesempilha - 2\nConta - 3\nImprimeA - 4\nImprimeB - 5\nReverse - 6\n");
        printf("Digite aqui: "); scanf("%d", &escolha);
        
        switch(escolha){
        case 0:
            printf("Programa finalizado!");
            break;
        case 1:
            printf("Digite o valor a ser empilhado: "); scanf("%d", &val);
            Empilha(val, &begin);
            break;
        case 2:
            if(begin == NULL)
                printf("Pilha vazia\n");
            else    
                printf("Valor desempilhado: %d\n", Desempilha(&begin));
            break;
        case 3:
            printf("Quantidade de valores na Pilha: %d\n", Conta(begin));
            break;
        case 4:
            ImprimeA(begin);
            break;
        case 5:
            ImprimeB(begin);
            break;
        case 6:
            Reverse(&begin);
            break;
        default:
            printf("Numero invalido\n");
            break;
        }
    }while(escolha);

    pilha *aux = begin->next;
    while(aux->next != NULL){
        free(begin);
        pilha *begin = new pilha();
        begin = aux;
        aux = aux->next;
    }
    free(aux);
}