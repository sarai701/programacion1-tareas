#ifndef TORNEO_H
#define TORNEO_H
#include "Equipo.h"


class Torneo
{
    public:
        Torneo();
        void iniciarTorneo();
        void jugarPartidos();
        void mostrarResultados();
        void mostrarTabla();
        virtual ~Torneo();

    protected:

    private:
        Equipo equipos[6];
        int matrizPartidos[6][6];
};

#endif // TORNEO_H
