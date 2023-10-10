#include <stdio.h>

int mdc(int a,int b){
    if (a%b == 0)
        return b;
    else
        return mdc(b, a%b);
}

int main(){
    int a, b, aux;
    scanf("%d %d", &a, &b);
    if (b < a){
        aux = a;
        a = b;
        b = aux;
    }
    printf("%d", mdc(a, b));
}