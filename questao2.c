#include <stdio.h>
#include <stdlib.h>

int main(){
    int elemento1 = 0, elemento2 = 1, num, seq=0;

    printf("Informe o número desejado:");
    scanf("%d", &num);

    printf("---Sequência de Fibonacci---\n");
    while(seq != num){
        if(elemento1 == 0){
            printf("el1-%d ", elemento1);
            printf("el2-%d ", elemento2);
        }
        seq = elemento1+elemento2;
        elemento1 = elemento2;
        elemento2 = seq;

        printf("seq-%d ", seq);
        
        if(seq == num){
            printf("\nEsse número pertence a sequência de Fibonacci!\n");
        }

        if(seq > num){
            printf("\nEsse número não pertence a sequência de Fibonacci!\n");
            break;
        }
    }

    return 0;
}