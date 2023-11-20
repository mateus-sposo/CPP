#include <stdio.h>

int main(){
    int x, n;
    scanf("%d %d", &n, &x);
    int v[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &v[i]);
    int posf = n, posi = -1, posm;
    while(posi < posf - 1){
        posm = (posi + posf) / 2;
        if (v[posm] == x)
            break;
        if (v[posm] < x)
            posi = posm;
        else
            posf = posm;
    }
    printf("%d", posm);
}