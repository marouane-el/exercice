#include <stdio.h>

int main() {
    float y , km;

    printf("Entrez la distance en km : ");
    scanf("%f",&km);

    
    y = km * 1093.61;
    
    printf("La distance en yards : %f\n", y);

    return 0;
}
