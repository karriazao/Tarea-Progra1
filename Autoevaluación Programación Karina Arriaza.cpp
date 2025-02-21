#include <iostream>
#include <iomanip>

using namespace std;

float calcularNotaFinal (float notas[]){
return (notas[0] * 0.20) + (notas[1]* 0.25)+ (notas[2]+0.20)+(notas[3]+0.35);
}

float calcularPorcentaje(float notaFinal){
return (notaFinal/100)*100;
}

int main()
{
    const int Num_Alumnos = 5;
    float notas[Num_Alumnos][4];
    float notasFinales[Num_Alumnos];
    float porcentaje[Num_Alumnos];

    for (int i=0; i < Num_Alumnos; i++)
    {
        cout << "Ingrese las notas del alumno" << (i+1) <<"\n";
        cout << "1P (20 puntos): ";
        cin >> notas[i][0];
        cout << "2p (25 puntos): ";
        cin >> notas[i][2];
        cout << "Act (20 puntos) :";
        cin >> notas [i][2];
        cout << "EF (35 puntos) :";
        cin >> notas[i][3];

        notasFinales[i]= calcularNotaFinal(notas[i]);
        porcentaje[i]=calcularPorcentaje(notasFinales[i]);
    }

    cout << fixed << setprecision(2);
    cout << "\Resultados:\n";
    for (int i=0; i<Num_Alumnos; i++){
        cout << "Alumno "<< (i+1) << "-Nota Final: " << notasFinales[i]
        <<",Porcentaje: " << porcentaje[i] <<"%\n";
    }

    return 0;
}

