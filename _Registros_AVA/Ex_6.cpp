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

    printf("%d\n", D);

    return 0;
}