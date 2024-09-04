#include <stdio.h>
#include <stdlib.h>

int main() {

  int a, b; 
  int auxiliar, i, n;

    a = 0;
    b = 1;

    printf("Numero: ");
        scanf("%d", &n);
    
    printf("\nSérie:\n");
   
   if (n >= 0){

    printf("%d\n", a);
   }

    if (n >= 1){
        printf("%d\n", b);
    }


    for(i = 2; i <= n; i++) {

    auxiliar = a + b;
    a = b;
    b = auxiliar;

    printf("%d \n", auxiliar);

    if (n == auxiliar){
        printf("Pertence a sequencia. \n");
    }
    if (auxiliar > n && auxiliar != n){
        printf("Não ertence a sequencia. \n");
    }

    if (n == auxiliar) break; 
    if (auxiliar > n && auxiliar != n) break;

    } 

    system("Pause");
    return 0;
}
