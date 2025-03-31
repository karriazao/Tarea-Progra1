#ifndef EQUIPOS_H
#define EQUIPOS_H

#include <string>

class Equipos
{
    public:
        Equipos(const std::string &nombre);
        void agregarVictoria();
        void agregarDerrota();
        void agregarEmpate();

        std::string getNombre() const;
        int getPartidosJugados() const;
        int getGanados() const;
        int getPerdidos() const;
        int getEmpatados() const;
        int getPuntos() const;


    private:
        std::string nombre;
        int partidosJugados;
        int ganados;
        int perdidos;
        int empatados;
};

#endif // EQUIPOS_H

