#include <stdio.h>

int main() {
    float min, seg, cen, dis;
    float tse, vms, vkh;

    printf("--- Calculadora de velocidad en km/h ---\n");
    
    // Leer
    printf("Ingrese los minutos: ");
    scanf("%f", &min);
    printf("Ingrese los segundos: ");
    scanf("%f", &seg);
    printf("Ingrese las centesimas: ");
    scanf("%f", &cen);
    printf("Ingrese la distancia recorrida en metros: ");
    scanf("%f", &dis);

    // Calculos
    tse = (min * 60.0) + seg + (cen / 100.0);
    vms = dis / tse;
    vkh = (vms * 3600.0) / 1000.0;

    printf("\nLa velocidad del participante es: %.2f km/h\n", vkh);

    return 0;
} 
