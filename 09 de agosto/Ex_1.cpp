#include <stdio.h>

void imprime(int c, int num){
  
    for (c = 0; c < 100; c++){
        printf("%d ",num);
        num += 3;
        
    }
    printf("\n %d \n",num);
}

int main(){
  int cont = 0, i = 0;
    imprime(cont, i);

}