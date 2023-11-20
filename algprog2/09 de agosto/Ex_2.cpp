#include <stdio.h>

void leValor(int &n){
    scanf("%d" &n);
}

void ultimoDigito(int n, int &digito){
    digito = n%10;
}

void atualizarValor(int &n){
    n /= 10;
}

int main(){
    int n, digito, cont = 0, contP = 0, somaP = 0;
    leValor(n);
    while (n > 0){
        ultimoDigito(n, digito);
        if (digito%2 = 0){
            contP++ ;
            somaP += digito;
        }
        atualizarValor(n);
        cont++;

    }
    printf("%d digitos foram informados", cont);
    if (contP > 0){
        printf("Media dos digitos pares: %f", float(somaP)/contP);
    }
    else{
        printf("Nao tem digitos pares no numero");
    }
    
}