#include <stdio.h>

int main(){ int num, sum, n1, n2; printf("Digite um numero inteiro: "); scanf("%d", &num); n1 = num%10; n2 = num/10; n2 = n2%10; sum = n1 + n2; printf("A soma dos dois últimos dígitos do número %d eh: %d\n", num, sum); return 0; }