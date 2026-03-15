#include <stdio.h>
int main(){
	float a, b, volumen;
	printf("================================\nCalculadora de vol. de esferoide\n================================");
	printf("\nSiguiendo la formula: V= (4/3) * (3.14) * (a^2) * (b)");
	
	printf("\nIngrese el valor de a: ");
	scanf("%f", &a);
	
	printf("Ingrese el valor de b: ");
	scanf("%f", &b);
	
	volumen = (4.0/3.0) * (3.14) * (a*a) * (b);
	printf("El volumen de su esferoide es: %.2f unidades cubicas", volumen);
	
	return 0;
}
