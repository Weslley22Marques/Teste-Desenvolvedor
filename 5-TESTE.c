#include <stdio.h>
#include <stdlib.h>

    void inverter_palavra(char str[]) {

    int tamanho = strlen(str);
    int inicio = 0;
    int fim = tamanho - 1;

    while (inicio < fim) {

        char temp = str[inicio];

        str[inicio] = str[fim];

        str[fim] = temp;

        inicio++;
        fim--;

    }

}

int main() {

    char palavra[25];
    printf("Qual palavra deseja inverter? \n");
    scanf("%s", &palavra);


    printf("Palavra original: %s\n", palavra);

    inverter_palavra(palavra);

    printf("Palavra invertida: %s\n", palavra);

    
    
    system("Pause");
    return 0;
}
