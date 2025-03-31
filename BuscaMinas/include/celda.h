//Karla Patricia Ruiz Ordo�ez
#ifndef CELDA_H  // Verifica si CELDA_H no ha sido definido antes
#define CELDA_H  // Define CELDA_H para evitar inclusiones m�ltiples

// Librer�a que guarda los atributos y los prototipos de los m�todos utilizados para crear y administrar las celdas de juego
// Fecha: 17 marzo 2023

// Definici�n de la clase Celda
class Celda
{
    public:
        // Constructor por defecto
        Celda();

        // Constructor que inicializa la celda con coordenadas y estado de mina
        Celda(int coordenadaX, int coordenadaY, bool estadoMina);

        // M�todos para establecer y obtener la coordenada X de la celda
        int setCoordenadaX(int coordenadaX); // Asigna la coordenada X
        int getCoordenadaX(); // Devuelve la coordenada X
        // M�todos para establecer y obtener la coordenada Y de la celda
        int setCoordenadaY(int coordenadaY); // Asigna la coordenada Y
        int getCoordenadaY(); // Devuelve la coordenada Y
        // M�todos para manejar si la celda contiene una mina
        bool setMina(bool estadoMina); // Asigna si hay una mina en la celda
        bool getMina(); // Devuelve si la celda tiene una mina (true = s�, false = no)
        // M�todos para marcar si la mina ha sido descubierta
        bool setMinaDescubierta(bool minaDescubierta); // Marca si la mina fue descubierta
        bool getMinaDescubierta(); // Devuelve si la mina ha sido descubierta
        // M�todo para imprimir la informaci�n de la celda
        void imprimirCelda(); // Muestra la celda en consola con sus coordenadas y si tiene una mina
    protected: // Secci�n protegida, vac�a en este caso

    private:
        int coordenadaX, coordenadaY; // Posici�n de la celda en el tablero
        bool mina, minaDescubierta; // Indica si la celda tiene una mina y si ha sido descubierta
};

#endif // CELDA_H  // Fin de la directiva de preprocesador
