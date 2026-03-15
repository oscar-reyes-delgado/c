#include <stdio.h>

int main() {
    int peso;
    int p1000, p500, p200, p100, p50, p10, p5, p2, p1;

    printf("--- Control de Bascula (Desglose de Pesas) ---\n");
    printf("Ingrese el peso en gramos (max. 10000): ");
    scanf("%d", &peso);

    // calculos
    p1000 = peso / 1000;
    peso = peso % 1000;

    p500 = peso / 500;
    peso = peso % 500;

    p200 = peso / 200;
    peso = peso % 200;

    p100 = peso / 100;
    peso = peso % 100;

    p50 = peso / 50;
    peso = peso % 50;

    p10 = peso / 10;
    peso = peso % 10;

    p5 = peso / 5;
    peso = peso % 5;

    p2 = peso / 2;
    p1 = peso % 2;

    printf("\nPesas necesarias:\n");
    printf("1000g: %d\n500g: %d\n200g: %d\n100g: %d\n", p1000, p500, p200, p100);
    printf("50g: %d\n10g: %d\n5g: %d\n2g: %d\n1g: %d\n", p50, p10, p5, p2, p1);

    return 0;
} 
