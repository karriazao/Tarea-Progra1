#include "Equipos.h"

Equipos::Equipos(const std::string &nombre) : nombre(nombre), partidosJugados(0), ganados(0), perdidos(0), empatados(0) {}

void Equipos::agregarVictoria() {
    ganados++;
    partidosJugados++;
}

void Equipos::agregarDerrota() {
    perdidos++;
    partidosJugados++;
}

void Equipos::agregarEmpate() {
    empatados++;
    partidosJugados++;
}

std::string Equipos::getNombre() const {
    return nombre;
}

int Equipos::getPartidosJugados() const {
    return partidosJugados;
}

int Equipos::getGanados() const {
    return ganados;
}

int Equipos::getPerdidos() const {
    return perdidos;
}

int Equipos::getEmpatados() const {
    return empatados;
}

int Equipos::getPuntos() const {
    return ganados * 3 + empatados;
}
