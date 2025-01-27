// Implementaci�n del c�lculo de una potencia mediante una funci�n recursiva
// El paso recursivo se basa en que A^B = B*(A^(B-1))
// El paso base se base en que A^0 = 1
// Priscila Sarai Guzm�n Calgua
Funcion resultado <- Potencia (base, exponente)
    Si exponente=0 Entonces
        resultado <- 1;
    sino 
        resultado <- base*Potencia(base,exponente-1); 
    FinSi
FinFuncion

Algoritmo DosALaDiezRecursivo
    Escribir "Ingrese Base"
    Leer base
    Escribir "Ingrese Exponente"
    Leer exponente
    Escribir "El resultado es ",Potencia(base,exponente)
FinAlgoritmo