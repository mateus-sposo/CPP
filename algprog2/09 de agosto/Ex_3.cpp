#include <stdio.h>
#define MAX 100

int LeDimensao(){
    int n;
    scanf("%d", &n);
    return n;
}

void LeMatriz(int n, int M[MAX][MAX]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &M[i][j]);
        }
    }

}

int SomaDPrincipal(int M[MAX][MAX], int n){
    int soma = 0;
    for(int i = 0; i < n; i++){
        soma += M[i][i];
    }
    return soma;
}

void SomaDSecundaria(int n, int M[MAX][MAX], int &somaDS){
    for(int i = 0; i < n; i++){
        somaDS += M[i][n - i - 1];
    }
}

void ImprimeMatriz(int n, int M[MAX][MAX]){
    for(int i = 0; i < n; i++){
        for( int j = 0; j < n; j++){
            printf("%d ",M[i][j]);
        }
        printf("\n");
    }
}

void ImprimeSomas(int n, int M[MAX][MAX], int somaP, int somaS){
    ImprimeMatriz(n, M);
    printf("Soma da diagonal principal: %d \nSoma da diagonal secundaria: %d\n", somaP, somaS);
}

int main(){
 
    int n = LeDimensao();
    int M[MAX][MAX];
    LeMatriz(n, M);
    int somaDP = SomaDPrincipal(M, n);
    int somaDS = 0;
    SomaDSecundaria(n, M, somaDS);
    ImprimeSomas(n, M, somaDP, somaDS);
}