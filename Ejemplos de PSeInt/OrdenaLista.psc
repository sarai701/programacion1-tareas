// Se ingresa una lista de nombres (la lista termina
// cuando se ingresa un nombre en blanco) no permitiendo
// ingresar repetidos y luego se ordena y muestra
// Priscila Sarai Guzmán Calgua
Proceso OrdenaLista
	Definir nombre, lista, aux Como Cadena
	Definir se_repite Como Lógico
	Definir cant, i, j, pos_menor Como Entero
	Dimensionar lista(200)
	Escribir 'Ingrese los nombres (enter en blanco para terminar):'
	// leer la lista
	cant <- 0
	Leer nombre
	Mientras nombre<>'' Hacer
		lista[cant] <- nombre
		cant <- cant+1
		Repetir
			Leer nombre // leer un nombre y ver que no este ya en la lista
			se_repite <- Falso
			Para i<-0 Hasta cant-1 Hacer
				Si nombre=lista[i] Entonces
					se_repite <- Verdadero
				FinSi
			FinPara
		Hasta Que  NO se_repite
	FinMientras
	// ordenar
	Para i<-0 Hasta cant-2 Hacer
		// busca el menor entre i y cant
		pos_menor <- i
		Para j<-i+1 Hasta cant-1 Hacer
			Si lista[j]<lista[pos_menor] Entonces
				pos_menor <- j
			FinSi
		FinPara
		// intercambia el que estaba en i con el menor que encontro
		aux <- lista[i]
		lista[i] <- lista[pos_menor]
		lista[pos_menor] <- aux
	FinPara
	// mostrar como queda la lista
	Escribir 'La lista ordenada es:'
	Para i<-0 Hasta cant-1 Hacer
		Escribir '   ', lista[i]
	FinPara
FinProceso
