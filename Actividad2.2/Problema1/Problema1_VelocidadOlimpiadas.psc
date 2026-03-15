Algoritmo Problema1_VelocidadOlimpiadas
    Definir min, seg, cen, dis Como Real
    Definir tse, vms, vkh Como Real
    
    Escribir "--- Calculadora de Velocidad ---"
    
    Escribir "Ingrese los minutos:"
    Leer min
    Escribir "Ingrese los segundos:"
    Leer seg
    Escribir "Ingrese las centésimas:"
    Leer cen
    Escribir "Ingrese la distancia recorrida en metros:"
    Leer dis
    
    // Proceso
    tse <- (min * 60) + seg + (cen / 100)
    vms <- dis / tse
    vkh <- (vms * 3600) / 1000
    
    // Salida
    Escribir "La velocidad del participante es: ", vkh, " km/h"
FinAlgoritmo