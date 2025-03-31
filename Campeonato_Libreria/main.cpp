#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Campeonato.h"

int main() {
    srand(static_cast<unsigned int>(time(0)));
    while (true) {
        std::vector<std::string> nombresEquipos(6);
        for (int i = 0; i < 6; i++) {
            std::cout << "Ingrese el nombre del equipo " << (i + 1) << ": ";
            std::cin >> nombresEquipos[i];
        }

        Campeonato campeonato(nombresEquipos);
        campeonato.jugarPartidos();
        campeonato.mostrarTabla();
        campeonato.determinarCampeonYDescenso();

        char continuar;
        std::cout << "¿Desea realizar otro campeonato? (s/n): ";
        std::cin >> continuar;
        if (continuar != 's' && continuar != 'S') {
            break;
        }
    }

    return 0;
}
