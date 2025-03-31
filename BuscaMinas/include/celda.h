//Karla Patricia Ruiz Ordoñez
#ifndef CELDA_H  // Verifica si CELDA_H no ha sido definido antes
#define CELDA_H  // Define CELDA_H para evitar inclusiones múltiples

// Librería que guarda los atributos y los prototipos de los métodos utilizados para crear y administrar las celdas de juego
// Fecha: 17 marzo 2023

// Definición de la clase Celda
class Celda
{
    public:
        // Constructor por defecto
        Celda();

        // Constructor que inicializa la celda con coordenadas y estado de mina
        Celda(int coordenadaX, int coordenadaY, bool estadoMina);

        // Métodos para establecer y obtener la coordenada X de la celda
        int setCoordenadaX(int coordenadaX); // Asigna la coordenada X
        int getCoordenadaX(); // Devuelve la coordenada X
        // Métodos para establecer y obtener la coordenada Y de la celda
        int setCoordenadaY(int coordenadaY); // Asigna la coordenada Y
        int getCoordenadaY(); // Devuelve la coordenada Y
        // Métodos para manejar si la celda contiene una mina
        bool setMina(bool estadoMina); // Asigna si hay una mina en la celda
        bool getMina(); // Devuelve si la celda tiene una mina (true = sí, false = no)
        // Métodos para marcar si la mina ha sido descubierta
        bool setMinaDescubierta(bool minaDescubierta); // Marca si la mina fue descubierta
        bool getMinaDescubierta(); // Devuelve si la mina ha sido descubierta
        // Método para imprimir la información de la celda
        void imprimirCelda(); // Muestra la celda en consola con sus coordenadas y si tiene una mina
    protected: // Sección protegida, vacía en este caso

    private:
        int coordenadaX, coordenadaY; // Posición de la celda en el tablero
        bool mina, minaDescubierta; // Indica si la celda tiene una mina y si ha sido descubierta
};

#endif // CELDA_H  // Fin de la directiva de preprocesador
