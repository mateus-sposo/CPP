#include <stdio.h>

struct hora{
    int h, m, s;
};

int main(){
    hora H1, H2, HF;  
    int temp1, temp2, diff;
    
    scanf("%d:%d:%d", &H1.h, &H1.m, &H1.s);
    scanf("%d:%d:%d", &H2.h, &H2.m, &H2.s);
    
    temp1 = H1.h * 3600 + H1.m * 60 + H1.s;
    temp2 = H2.h * 3600 + H2.m * 60 + H2.s;

    diff = temp1 - temp2;
    if (diff < 0)
        diff *= -1;

    HF.s = diff % 60;
    diff /= 60;
    HF.m = diff % 60;
    diff /= 60;
    HF.h = diff % 24;

    printf("%.2d:%.2d:%.2d\n", HF.h, HF.m, HF.s);
}