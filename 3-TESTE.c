#include <stdio.h>
#include <stdlib.h>
#include "cJSON.h"


int main() {

    FILE *fp = fopen("dados.json", "r");
    char *dia = 0;
    int i;
    


    cJSON *root = cJSON_Parse(dia);
    cJSON *faturamentos = cJSON_GetObjectItem(root, "valor");

    float menor_faturamento = 9999999, maior_faturamento + 0 , soma_faturamento = 0;
    int num_dias = cJSON_GetArraySize(faturamentos), dias_acima_media = 0;

    for (i = 0; i < num_dias; i++) {
        cJSON *dia = cJSON_GetArrayItem(faturamentos, i);
        float valor = cJSON_GetNumberValue(dia);

        menor_faturamento = fminf(menor_faturamento, valor);
        maior_faturamento = fmaxf(maior_faturamento, valor);

        soma_faturamento += valor;
    }

    float media_mensal = soma_faturamento / 22

    for (i = 0 ; i < num_dias ; i++) {
        cJSON *dia = cJSON_GetArrayItem(faturamentos, i);
        float valor = cJSON_GetNumberValue(dia);
        if (valor > media_mensal) {
            dias_acima_media++;
        }
    }

    printf("Menor valor de faturamento: R$ %.2f\n", menor_faturamento);
    printf("Maior valor de faturamento: R$ %.2f\n", maior_faturamento);
    printf("Número de dias com faturamento acima da média: %d\n", dias_acima_media);

    system("Pause");
    return 0;
}
