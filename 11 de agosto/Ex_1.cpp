#include <stdio.h>
#define MAX 100

void LeMatriz(int n, int m, int M[MAX][MAX]){

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            scanf("%d", &M[i][j]);
        }
    }
}

int ContaLinhasNulas(int n, int m, int M[MAX][MAX]){
    int flag = 0, cont = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (M[i][j] != 0){
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cont += 1;
        flag = 0;
    }
    return cont;
}

void ContaColunasNulas(int n, int m, int M[MAX][MAX], int &conta_c){
    int flag = 0;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if (M[j][i] != 0){
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            conta_c += 1;
        flag = 0;
    }
}



int main(){
 
 int n, m, M[MAX][MAX], ln, cn;
 scanf("%d %d", &n, &m);
    LeMatriz(n, m, M);
    ln = ContaLinhasNulas(n, m, M);
    ContaColunasNulas(n, m, M, cn);
    printf("Linhas nulas = %d\nColunas nulas = %d\n", ln, cn);
}