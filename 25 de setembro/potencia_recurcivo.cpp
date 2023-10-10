#include <stdio.h>

void potencia(int x, int &n, int &pot){
    if (n > 0){
        pot *= x;
        --n;
        potencia(x, n, pot);
    }
}   

int main(){
    int x, n, pot = 1;
    scanf("%d %d", &x, &n);
    potencia(x, n, pot);
    printf("%d", pot);
}