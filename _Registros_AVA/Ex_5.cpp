#include <stdio.h>

struct data{
    int d, m, a;
};

int main(){
    data d1, d2;
    int N1, N2, dias;

    scanf("%d/%d/%d", &d1.d, &d1.m, &d1.a);
    scanf("%d/%d/%d", &d2.d, &d2.m, &d2.a);
    if (d1.m <= 2){
        d1.a -= 1;
        d1.m += 12;
    }
    d1.m += 1;
    
    N1 = int(1461 * d1.a / 4) + int(153 * d1.m / 5) + d1.d;

    if (d2.m <= 2)
        d2.a -= 1;
    if (d2.m <= 2)
        d2.m += 12;
    d2.m += 1;

    N2 = int(1461 * d2.a / 4) + int(153 * d2.m / 5) + d2.d;

    dias = N1 - N2;
    if (dias < 0)
        dias *= -1;

    printf("%d\n", dias);

    return 0;
}