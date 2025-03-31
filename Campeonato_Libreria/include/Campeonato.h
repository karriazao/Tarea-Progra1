#ifndef CAMPEONATO_H
#define CAMPEONATO_H

#include <vector>
#include "Equipos.h"

class Campeonato {
private:
    std::vector<Equipos> equipos;

public:
    Campeonato(const std::vector<std::string> &nombresEquipos);

    void jugarPartidos();
    void mostrarTabla() const;
    void determinarCampeonYDescenso() const;
};


#endif // CAMPEONATO_H
