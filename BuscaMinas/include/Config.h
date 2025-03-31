//Priscila Sarai Guzm�n Calgua
#ifndef CONFIG_H //Verifica si no esta definido
#define CONFIG_H //Define para evitar inclusiones m�ltiples


class Config //Definici�n de la clase Config
{
    public:
        //Constructor, num. filas tablero, num. columnas tablero, num. minas tablero,
        //modo desarrollador indica si est� activado, num. vidas del jugador
        Config(int filasTablero, int columnasTablero, int minasTablero, bool modoDesarrolladorTablero, int vidasTablero);
        //M�todo get para obtener los valores y set para modificar los valores de la configuraci�n
        int getfilasTablero(); //Obtiene el n�mero de filas del tablero
        int setfilasTablero(int filasTablero); //Establece el n�mero de filas del tablero
        int getcolumnasTablero(); //Obtiene el n�mero de columnas del tablero
        int setcolumnasTablero(int columnasTablero); //Establece el n�mero de columnas del tablero
        int getminasTablero();//Obtiene la cantidad de minas en el tablero
        int setminasTablero(int minasTablero);//Establece la cantidad de minas en el tablero
        bool getmodoDesarrolladorTablero();//Indica si el modo desarrollador est� activo (true/false)
        bool setmodoDesarrolladorTablero(bool modoDesarrolladorTablero);//Activa o desactiva el modo desarrollador
        int getvidasTablero();//Obtiene el n�mero de vidas del jugador
        int setvidasTablero(int vidasTablero);//Establece el n�mero de vidas del jugador
        //Muestra un men� para configurar las opciones del juego
        void menuConfiguracion(); //Permite modificar los valores de filas, columnas, minas, modo desarrollador y vidas
    protected:

    private:
        int filasTablero; //N�mero de filas en el tablero
        int columnasTablero; //N�mero de columnas en el tablero
        int minasTablero; //Cantidad de minas en el tablero
        bool modoDesarrolladorTablero; //Indica si el modo desarrollador est� activado
        int vidasTablero; // N�mero de vidas del jugador
};

#endif // CONFIG_H
