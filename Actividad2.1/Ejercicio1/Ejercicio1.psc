Algoritmo Ejercicio1
    Definir s, desp_inicial, velocidad_inicial, a, t Como Real
    
    Escribir "Ingrese el desplazamiento inicial en metros:"
    Leer desp_inicial
    Escribir "Ingrese la velocidad inicial en m/s:"
    Leer velocidad_inicial
    Escribir "Ingrese la aceleración en m/s^2:"
    Leer a
    Escribir "Ingrese el tiempo en s:"
    Leer t
    
    s <- desp_inicial + (velocidad_inicial * t) + (0.5 * a * t^2)
    
    Escribir "El desplazamiento final es: ", s, " metros"
FinAlgoritmo