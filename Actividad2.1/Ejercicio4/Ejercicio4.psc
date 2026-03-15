Algoritmo Ejercicio4
	Definir d, h, m, s, suma Como Entero
	
	Escribir "Ingrese el total de dias:"
	Leer d
	
	Escribir "Ingrese el total de horas: "
	Leer h
	
	Escribir "Ingrese el total de minutos:"
	Leer m
	
	Escribir "Ingrese el total de segundos:"
	Leer s
	
	suma <- (d*24*60*60) + (h*60*60) + (m*60) + s
	Escribir "El total de segundos es: ", suma, " segundos"
FinAlgoritmo
