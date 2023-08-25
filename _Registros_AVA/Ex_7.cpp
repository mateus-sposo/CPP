#include <stdio.h>
#define MAX 30
#define PRO 10

struct prod{
    int cod;
    char nome[MAX];
    double preco;
};

int main(){
    int n, num, flag = 0;
    scanf("%d", &n);
    prod N[MAX];
    
    for(int i = 0; i < n; i++){
        scanf("%d %s %lf", &N[i].cod, N[i].nome, &N[i].preco);
    }
    printf("LISTAGEM\n");
    
    for(int i = 0; i < n; i++){
        printf("%d %s\n", N[i].cod, N[i].nome);
    }
    
    scanf("%d", &num);

    for(int i = 0; i < n; i++){
        if(N[i].cod == num){
            printf("Preço: R$ %.2lf\n", N[i].preco);
            flag = 1;
            break;
        } 
    }
    if(!flag)
        printf("Inexistente");
}