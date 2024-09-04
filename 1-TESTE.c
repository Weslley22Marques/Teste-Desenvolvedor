#include <stdio.h>
#include <stdlib.h>

int main() {

    int INDICE = 13;
    int SOMA = 0;
    int K = 0;

    if (K < INDICE){
        K = K + 1;
        SOMA = SOMA + K;
    }

    printf("%d \n", SOMA);

    system("Pause");
    return 0;
}
