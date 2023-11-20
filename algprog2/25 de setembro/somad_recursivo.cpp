#include <stdio.h>

int somad(int n, int &sum){
    sum += n%10;
    n /= 10;
    if (n >= 1)
        n = somad(n, sum);
    return n;
}

int main(){
    int n, sum = 0;
    scanf("%d", &n);
    somad(n, sum);
    printf("%d", sum);
}