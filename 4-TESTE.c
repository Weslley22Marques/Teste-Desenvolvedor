#include <stdio.h>
#include <stdlib.h>


int main() {

    float SP, RJ, MG, ES, OUT;
    float t_mensal;
    float percSP, percRJ, percMG, percES, percOUT;

    SP = 67836,43;
    RJ = 36678,66;
    MG = 29229,88;
    ES = 27165,48;
    OUT = 19849,53; 

    t_mensal = SP + RJ + MG + ES + OUT;
    
    percSP = (SP / t_mensal) * 100;
    percRJ = (RJ / t_mensal) * 100;
    percMG = (MG / t_mensal) * 100;
    percES = (ES / t_mensal) * 100;
    percOUT = (OUT / t_mensal) * 100;

    printf("\nPercentual mensal SP: %2.f ", percSP);
    printf("\nPercentual mensal RJ: %2.f", percRJ);
    printf("\nPercentual mensal MG: %2.f", percMG);
    printf("\nPercentual mensal ES: %2.f", percES);
    printf("\nPercentual mensal OUT: %2.f \n", percOUT);
    
    system("Pause");
    return 0;
}
