#include <stdio.h>
#include <string.h>
#define MAX 30
#define ALU 5

struct tAluno{
    char nome[MAX], curso[MAX];
    int num;
};

int main(){
    tAluno info[ALU];
    char curso[MAX];
    for (int i = 0; i < ALU; i++){
        scanf("%d", &info[i].num);
        scanf(" %[^\n]", info[i].nome);
        scanf(" %[^\n]", info[i].curso);
    }
    scanf(" %[^\n]", curso);
    for (int i = 0; i < ALU; i++){
        if (!strcmp(info[i].curso, curso)){
            printf("%d %s\n", info[i].num, info[i].nome);
        }
    }
    return 0;
}
