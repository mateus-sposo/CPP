#include <stdio.h>

int busca(int posi, int posf, int &posm, int x, int v[]){
    posm = (posi + posf) / 2;
    if (v[posm] == x)
        return posm;
    else if (v[posm] < x)
        return busca(posm, posf, posm, x, v);
    else
        return busca(posi, posm, posm, x, v);
}

int main(){
    int x, n;
    scanf("%d %d", &n, &x);
    int v[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &v[i]);
    int posf = n, posi = -1, posm;
    busca(posi, posf, posm, x, v);
    printf("%d", posm);
}