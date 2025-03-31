#include "Campeonato_Libraria.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

void generarMarcadores(int &golesEquipo1, int &golesEquipo2) {
    golesEquipo1 = rand() % 11; // Goles entre 0 y 10
    golesEquipo2 = rand() % 11; // Goles entre 0 y 10
}

void mostrarTabla(const std::vector<std::string> &equipos, const std::vector<std::vector<int>> &resultados) {
    std::cout << "\nTabla de posiciones:\n";
    std::cout << std::left << std::setw(15) << "Equipo"
              << std::setw(10) << "Partidos"
              << std::setw(8) << "Ganados"
              << std::setw(10) << "Perdidos"
              << std::setw(10) << "Empatados" << std::endl;

    for (size_t i = 0; i < equipos.size(); i++) {
        int partidosJugados = resultados[i][0] + resultados[i][1] + resultados[i][2];
        std::cout << std::left << std::setw(15) << equipos[i]
                  << std::setw(10) << partidosJugados
                  << std::setw(8) << resultados[i][0]
                  << std::setw(10) << resultados[i][1]
                  << std::setw(10) << resultados[i][2] << std::endl;
    }
}

std::vector<int> calcularPosiciones(const std::vector<std::vector<int>> &resultados) {
    std::vector<int> puntos(resultados.size());
    for (size_t i = 0; i < resultados.size(); i++) {
        puntos[i] = resultados[i][0] * 3 + resultados[i][2]; // 3 puntos por victoria, 1 por empate
    }
    return puntos;
}
