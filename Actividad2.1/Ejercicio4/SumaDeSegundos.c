#include <stdio.h>
int main(){
	int d, h, m, s, suma;
	printf("Escribe el numero de dias: ");
	scanf("%d", &d);
	
	printf("Escribe el numero de horas: ");
	scanf("%d", &h);

	printf("Escribe el numero de minutos: ");
	scanf("%d", &m);

	printf("Escribe el numero de segundos: ");
	scanf("%d", &s);	
	
	suma = (d*24*60*60)+(h*60*60)+(m*60)+s;
	printf("El total de segundos es: %d segundos", suma);
	return 0;
}
