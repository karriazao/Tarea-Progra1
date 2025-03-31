#ifndef CAMPEONATO_LIBRERIA
#define CAMPEONATO_LIBRERIA

#include <vector>
#include <string>

Class Equipo {

}

void generarMarcadores(int &golesEquipo1, int &golesEquipo2);
void mostrarTabla(const std::vector<std::string> &equipos, const std::vector<std::vector<int>> &resultados);
std::vector<int> calcularPosiciones(const std::vector<std::vector<int>> &resultados);

#endif // CAMPEONATO_LIBRERIA
