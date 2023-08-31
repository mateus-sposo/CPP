#include <stdio.h>
#include <string.h>
#include <math.h>

const int MAX = 25;
const int PATH_SIZE = 1000;

int pegarBitPosicaoN(unsigned int num, int qtdeBits) {
    return (num >> qtdeBits - 1) & 1;
}

int contarBits(unsigned int num) {
    int count = 0;

    if(!num) {
        return ++count;
    } else {
        while(num) {
            count++;
            num >>= 1;
        }
    }

    return count;
}

void dividir(unsigned int dividendo, unsigned int divisor, FILE *saida) {
    unsigned int Q = dividendo, M = divisor, A = 0; 
    int N = contarBits(Q);
    int contador = N;

    while(contador > 0) {
        A <<= 1;

        if(pegarBitPosicaoN(Q, N)) {       
            A++;
        } 

        unsigned int AMem = A;
        double bitsQ = pegarBitPosicaoN(Q, N);
        if(bitsQ)
            Q -= pow(2.0, N - 1);
        Q <<= 1;
        
        if(A >= M) {
            Q++;
            A -= M;
        } else {
            A = AMem;
        }
        contador--;
    }

    if(dividendo == 0)
        A = divisor;

    fprintf(saida, "%u/%u: %u, resto %u\n", dividendo, divisor, Q, A);
}

int main(){
    char caminho[PATH_SIZE];

    printf("Insira o caminho do arquivo, desde o diretório raiz (Ex: D:\\CPP\\entrada.txt): ");
    scanf("%s", caminho);

    FILE *entrada;
    entrada = fopen(caminho, "r");
    
    FILE *saida;
    saida = fopen("saida.txt", "w");

    if(entrada == NULL){
        printf("Erro ao abrir o arquivo de entrada\n");
    } else {
        char numeros[MAX];
        unsigned int dividendo, divisor;

        while(fgets(numeros, MAX, entrada) != NULL){
            if(!(*numeros == '\n' || *numeros == ' ')) {
                sscanf(numeros, "%u %u", &dividendo, &divisor);
                dividir(dividendo, divisor, saida);
            }
        }
    }

    fclose(entrada);
    fclose(saida);

    return 0;
}