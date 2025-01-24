#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor1[5];
    int vetor2[5];
    int soma[5];
    int i;

    for(i=0;i<5;i++){
    printf("insira os primeiros 5 valores:\n");
    scanf("%d", &vetor1[i]);
    }

    for(i=0;i<5;i++){
        printf("insira os outros 5 valores:\n");
        scanf("%d",&vetor2[i]);
    }

    for(i=0;i<5;i++){
        soma[i] = vetor1[i] + vetor2[i];
    }

    for(i=0;i<5;i++){
        printf("O valor %d sera: %d \n", i, soma[i]);
    }
    
    return 0;
}