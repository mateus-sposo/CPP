#include <stdio.h> 
#include <string.h>
#define MAX 15
#define FIV 5

struct eletro{
    char nome[15];
    double pot, temp;
};

int main(){
    eletro elet[FIV];
    int dias;
    double CT = 0, CR[FIV];
    for (int i = 0; i < FIV; i++){
        scanf(" %[^\n]", elet[i].nome);
        scanf("%lf", &elet[i].pot);
        scanf("%lf", &elet[i].temp);
        CT += elet[i].pot * elet[i].temp;
    }
    scanf("%d", &dias);
    CT *= dias;
    printf("%.2lf\n", CT);
    for (int i = 0; i < FIV; i++){
        CR[i] = elet[i].pot * elet[i].temp * dias * 100 / CT;
        printf("%.2lf\n", CR[i]);
    }    
    return 0;  
}