// Grupo <no.5
Algoritmo DeterminarMomentoDelDia
	Definir hora Como Entero
	Definir momento Como Cadena
	Escribir 'Ingrese la hora del d�a (entre 0 y 23): '
	Leer hora
	Si hora<0 O hora>23 Entonces
		Escribir 'Error: La hora ingresada no es v�lida.'
	SiNo
		Si hora>=0 Y hora<=5 Entonces
			momento <- 'Madrugada'
		SiNo
			Si hora>=6 Y hora<=11 Entonces
				momento <- 'Ma�ana'
			SiNo
				Si hora>=12 Y hora<=13 Entonces
					momento <- 'Mediod�a'
				SiNo
					Si hora>=14 Y hora<=19 Entonces
						momento <- 'Tarde'
					SiNo
						momento <- 'Noche'
					FinSi
				FinSi
			FinSi
		FinSi
		Escribir 'El momento del d�a es: ', momento
	FinSi
FinAlgoritmo
