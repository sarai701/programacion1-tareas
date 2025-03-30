#ifndef EQUIPO_H
#define EQUIPO_H
#include <iostream>
#include <string>

using namespace std;

class Equipo
{
    public:
        Equipo();
        void setNombre(const string& nombre);
        string getNombre() const;
        int getPuntos() const;
        int getGanados() const;
        int getEmpatados() const;
        int getPerdidos() const;
        void actualizarEstadisticas(int golesFavor, int golesContra);
        void mostrarEstadisticas();
        virtual ~Equipo();

    protected:

    private:
        string nombre;
        int puntos, ganados, empatados, perdidos;
};

#endif // EQUIPO_H
