#include <stdio.h>

int main() {
    float m , km;

    printf("la vitesse en  km/h : ");
    scanf("%f",&km);

    
    m = km * 0.27778;
    
    printf("la vitesse en kilomètres en m/s : %f m/s\n", m);

    return 0;
}
