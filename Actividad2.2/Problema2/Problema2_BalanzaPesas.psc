Algoritmo Problema2_BalanzaPesas
    Definir peso, p1000, p500, p200, p100, p50, p10, p5, p2, p1 Como Entero
    
    Escribir "Ingrese el peso total en gramos (máximo 10000):"
    Leer peso
    
    // Desglose de pesas usando division entera
    p1000 <- TRUNC(peso / 1000)
    peso <- peso MOD 1000
    
    p500 <- TRUNC(peso / 500)
    peso <- peso MOD 500
    
    p200 <- TRUNC(peso / 200)
    peso <- peso MOD 200
    
    p100 <- TRUNC(peso / 100)
    peso <- peso MOD 100
    
    p50 <- TRUNC(peso / 50)
    peso <- peso MOD 50
    
    p10 <- TRUNC(peso / 10)
    peso <- peso MOD 10
    
    p5 <- TRUNC(peso / 5)
    peso <- peso MOD 5
    
    p2 <- TRUNC(peso / 2)
    peso <- peso MOD 2
    
    p1 <- peso // Lo que queda son las pesas de 1g
    
    Escribir "Pesas necesarias para equilibrar:"
    Escribir "1000g: ", p1000
    Escribir "500g: ", p500
    Escribir "200g: ", p200
    Escribir "100g: ", p100
    Escribir "50g: ", p50
    Escribir "10g: ", p10
    Escribir "5g: ", p5
    Escribir "2g: ", p2
    Escribir "1g: ", p1
FinAlgoritmo