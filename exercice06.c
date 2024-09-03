#include <stdio.h>

int main() {
    float a , b ;
    printf("entrez la valeur de a: ");
    scanf("%f", &a);
    printf("entrez la valeur de b : ");
    scanf("%f", &b);
     // Calculer et afficher a + b
    printf("a + b = %.2f\n", a + b);
    
    // a - b
    printf("a - b = %.2f\n", a - b);
    
    //a * b
    printf("a * b = %.2f\n", a * b);
    
    // division par zéro
    if (b > 0) {
        printf("a / b = %.2f\n", a / b);
    } else {
        printf("Erreur : Division par zéro.\n");
    }
    

    return 0;
}