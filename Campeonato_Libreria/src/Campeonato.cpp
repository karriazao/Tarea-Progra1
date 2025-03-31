#include "Campeonato.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

Campeonato::Campeonato(const std::vector<std::string> &nombresEquipos) {
    for (const auto &nombre : nombresEquipos) {
        equipos.emplace_back(nombre);
    }
}

void Campeonato::jugarPartidos() {
    for (size_t i = 0; i < equipos.size(); i++) {
        for (size_t j = i + 1; j < equipos.size(); j++) {
            int golesEquipo1 = rand() % 11;
            int golesEquipo2 = rand() % 11;

            std::cout << "Partido: " << equipos[i].getNombre() << " " << golesEquipo1 << " - " << golesEquipo2 << " " << equipos[j].getNombre() << std::endl;

            if (golesEquipo1 > golesEquipo2) {
                equipos[i].agregarVictoria();
                equipos[j].agregarDerrota();
            } else if (golesEquipo1 < golesEquipo2) {
                equipos[j].agregarVictoria();
                equipos[i].agregarDerrota();
            } else {
                equipos[i].agregarEmpate();
                equipos[j].agregarEmpate();
            }

            golesEquipo1 = rand() % 11;
            golesEquipo2 = rand() % 11;

            std::cout << "Partido: " << equipos[j].getNombre() << " " << golesEquipo1 << " - " << golesEquipo2 << " " << equipos[i].getNombre() << std::endl;

            if (golesEquipo1 > golesEquipo2) {
                equipos[j].agregarVictoria ();
                equipos[i].agregarDerrota();
            } else if (golesEquipo1 < golesEquipo2) {
                equipos[i].agregarVictoria();
                equipos[j].agregarDerrota();
            } else {
                equipos[j].agregarEmpate();
                equipos[i].agregarEmpate();
            }
        }
    }
}

void Campeonato::mostrarTabla() const {
    std::cout << "\nTabla de posiciones:\n";
    std::cout << std::left << std::setw(15) << "Equipo"
              << std::setw(10) << "Partidos"
              << std::setw(8) << "Ganados"
              << std::setw(10) << "Perdidos"
              << std::setw(10) << "Empatados" << std::endl;

    for (const auto &equipo : equipos) {
        std::cout << std::left << std::setw(15) << equipo.getNombre()
                  << std::setw(10) << equipo.getPartidosJugados()
                  << std::setw(8) << equipo.getGanados()
                  << std::setw(10) << equipo.getPerdidos()
                  << std::setw(10) << equipo.getEmpatados() << std::endl;
    }
}

void Campeonato::determinarCampeonYDescenso() const {
    std::string campeon = equipos[0].getNombre();
    std::string descenso = equipos[0].getNombre();
    int maxPuntos = equipos[0].getPuntos();
    int minPuntos = equipos[0].getPuntos();

    for (const auto &equipo : equipos) {
        int puntos = equipo.getPuntos();
        if (puntos > maxPuntos) {
            maxPuntos = puntos;
            campeon = equipo.getNombre();
        }
        if (puntos < minPuntos) {
            minPuntos = puntos;
            descenso = equipo.getNombre();
        }
    }

    std::cout << "Campeón: " << campeon << " con " << maxPuntos << " puntos." << std::endl;
    std::cout << "Equipo en descenso: " << descenso << " con " << minPuntos << " puntos." << std::endl;
}
