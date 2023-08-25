#include <stdio.h>

struct data{
    int d, m, a;
};

int main(){
    data d;
    int D;

    scanf("%d/%d/%d", &d.d, &d.m, &d.a);

    if (d.m <= 2){
        d.a -= 1;
        d.m += 12;
    }
    d.m += 1;
    
    D = ((int(1461 * d.a / 4) + int(153 * d.m / 5) + d.d) - 621049) % 7;
    switch(D){
        case 0:
            printf("Domingo\n");
            break;
        case 1:
            printf("Segunda-feira\n");
            break;
        case 2:
            printf("Terca-feira\n");
            break;
        case 3:
            printf("Quarta-feira\n");
            break;
        case 4:
            printf("Quinta-feira\n");
            break;
        case 5:
            printf("Sexta-feira\n");
            break;
        case 6:
            printf("Sabado\n");
            break;
    }

    return 0;
}