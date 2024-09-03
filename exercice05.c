#include <stdio.h>

int main() {
    float celsius;

    
    printf("Entrez la température en Celsius : ");
    scanf("%f", &celsius);
    //* C < 0 : Solide
    // * 0 <= C < 100 : Liquide
    //* C >= 100 : Gaz

    if (celsius < 0) {
        printf("À %.2f°C, l'eau est sous forme solide.\n", celsius);
    } else if (celsius >= 0 && celsius < 100) {
        printf("À %.2f°C, l'eau est sous forme liquide.\n", celsius);
    } else {
        printf("À %.2f°C, l'eau est sous forme gazeuse.\n", celsius);
    }

    return 0;
}
