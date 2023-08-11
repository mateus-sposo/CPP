#include <stdio.h>
#include <cstring>
#define MAX 110

int main(){
    int n, c;
    

    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        char P[MAX];
        scanf("%s", &P);
            
        if (strlen(P) > 10){
            printf("%c%d%c", P[0], strlen(P) - 2, P[strlen(P)-1]);
        }
        else{
            for (int j = 0; j < strlen(P); j++){
                printf("%c", P[j]);
            }
        }
        printf("\n");
        
    }
}