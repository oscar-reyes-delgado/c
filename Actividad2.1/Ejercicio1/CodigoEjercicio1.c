#include <stdio.h>
int main(){
	float s, desp_inicial, velocidad_inicial, a, t;
	
	printf("Ingresa el desplazamiento inicial en metros: ");
	scanf("%f", &desp_inicial);
	
	printf("Ingresa la velocidad inicial en m/s: ");
	scanf("%f", &velocidad_inicial);
	
	printf("Ingrese la aceleracion en m/s^2: ");
	scanf("%f", &a);
	
	printf("Ingrese el tiempo en segundos: ");
	scanf("%f", &t);
	
	s = desp_inicial+(velocidad_inicial*t)+(0.5*a*t*t);
	printf("El desplazamiento final es: %.2f metros", s);
	return 0;
}
