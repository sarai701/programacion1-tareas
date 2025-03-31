//Priscila Sarai Guzmán Calgua
#ifndef CONFIG_H //Verifica si no esta definido
#define CONFIG_H //Define para evitar inclusiones múltiples


class Config //Definición de la clase Config
{
    public:
        //Constructor, num. filas tablero, num. columnas tablero, num. minas tablero,
        //modo desarrollador indica si está activado, num. vidas del jugador
        Config(int filasTablero, int columnasTablero, int minasTablero, bool modoDesarrolladorTablero, int vidasTablero);
        //Método get para obtener los valores y set para modificar los valores de la configuración
        int getfilasTablero(); //Obtiene el número de filas del tablero
        int setfilasTablero(int filasTablero); //Establece el número de filas del tablero
        int getcolumnasTablero(); //Obtiene el número de columnas del tablero
        int setcolumnasTablero(int columnasTablero); //Establece el número de columnas del tablero
        int getminasTablero();//Obtiene la cantidad de minas en el tablero
        int setminasTablero(int minasTablero);//Establece la cantidad de minas en el tablero
        bool getmodoDesarrolladorTablero();//Indica si el modo desarrollador está activo (true/false)
        bool setmodoDesarrolladorTablero(bool modoDesarrolladorTablero);//Activa o desactiva el modo desarrollador
        int getvidasTablero();//Obtiene el número de vidas del jugador
        int setvidasTablero(int vidasTablero);//Establece el número de vidas del jugador
        //Muestra un menú para configurar las opciones del juego
        void menuConfiguracion(); //Permite modificar los valores de filas, columnas, minas, modo desarrollador y vidas
    protected:

    private:
        int filasTablero; //Número de filas en el tablero
        int columnasTablero; //Número de columnas en el tablero
        int minasTablero; //Cantidad de minas en el tablero
        bool modoDesarrolladorTablero; //Indica si el modo desarrollador está activado
        int vidasTablero; // Número de vidas del jugador
};

#endif // CONFIG_H
