// Calcula el promedio de una lista de N datos
// Priscila Sarai Guzm�n Calgua
Proceso Promedio
	Definir i, n Como Entero
	Definir acum, dato, prom Como Real
	Escribir 'Ingrese la cantidad de datos:'
	Leer n
	acum <- 0
	Para i<-1 Hasta n Hacer
		Escribir 'Ingrese el dato ', i, ':'
		Leer dato
		acum <- acum+dato
	FinPara
	prom <- acum/n
	Escribir 'El promedio es: ', prom
FinProceso
