#include <stdio.h>

int main() {
    // Definimos las variables como float para manejar decimales
    float a, b, c, d, e, f;
    float x, y, denominador;

    printf("--- Solucion de Sistemas de Ecuaciones 2x2 ---\n");
    printf("Ecuacion 1: ax + by = c\n");
    printf("Ecuacion 2: dx + ey = f\n\n");

    // Lectura de coeficientes de la primera ecuacion
    printf("Ingrese a: ");
    scanf("%f", &a);
    printf("Ingrese b: ");
    scanf("%f", &b);
    printf("Ingrese c: ");
    scanf("%f", &c);

    // Lectura de coeficientes de la segunda ecuacion
    printf("\nIngrese d: ");
    scanf("%f", &d);
    printf("Ingrese e: ");
    scanf("%f", &e);
    printf("Ingrese f: ");
    scanf("%f", &f);

    // Calculamos el denominador (ae - bd)
    denominador = (a * e) - (b * d);

    // Validacion: Si el denominador es 0, el sistema no tiene solucion unica
    if (denominador == 0) {
        printf("\nError: El sistema no tiene una solucion unica (denominador es 0).\n");
    } else {
        // Aplicamos las formulas dadas en la actividad
        x = (c * e - b * f) / denominador;
        y = (a * f - c * d) / denominador;

        printf("\n--- Resultados ---\n");
        printf("El valor de x es: %.2f\n", x);
        printf("El valor de y es: %.2f\n", y);
    }

    return 0;
}

