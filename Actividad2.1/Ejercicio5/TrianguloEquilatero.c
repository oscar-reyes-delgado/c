#include <math.h>
#include <stdio.h>

int main(){
	float lado, perimetro, altura, area;
	printf("Ingresa el lado de tu triangulo equilatero: ");
	scanf("%f", &lado);
	perimetro = lado * 3;
	altura = (lado * sqrt(3))/2;
	area = (lado*altura)/2;
	printf("\nPerimetro: %.2f \nAltura: %.2f \n Area: %.2f", perimetro, altura, area);	
	return 0;
}
