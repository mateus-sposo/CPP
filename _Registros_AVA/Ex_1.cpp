#include <stdio.h>
#define MAX 60
#define FIV 5

struct Data{
    int dia, mes, ano;
};

struct comprom {
    char nome[MAX + 1];
    Data data;
};

int main(){
    comprom C[FIV];
    for (int i = 0; i < FIV; i++){
        scanf("%s", C[i].nome);
        scanf("%d/%d/%d", &C[i].data.dia, &C[i].data.mes, &C[i].data.ano);
    }
    int M = 1, A;
    while (M){
        scanf("%d/%d", &M, &A);
        for (int i = 0; i < FIV; i++){
            if (C[i].data.mes == M && C[i].data.ano == A)
                printf("%s\n", C[i].nome);
        }
    } 
    return 0;
}