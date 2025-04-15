#include <iostream>
using namespace std;

int main() 
{
    int preguntas, respuestas,;

    cout << "Ingrese la cantidad total de preguntas: ";
    cin >> preguntas;
    cout << "Ingrese la cantidad de respuestas correctas: ";
    cin >> respuestas;
   
    float porcentaje = (respuestas * 100) / preguntas;

    cout << "Porcentaje de respuestas correctas: " << porcentaje << "%" << endl;
    if (porcentaje >= 90) 
	{
        cout << "Nivel máximo" << endl;
    } else if (porcentaje >= 75) {
        cout << "Nivel medio" << endl;
    } else if (porcentaje >= 50) {
        cout << "Nivel regular" << endl;
    } else {
        cout << "Fuera de nivel" << endl;
    }
}

