/// BUSQUEDA BURBUJA

#include <iostream>

using namespace std;

void burbujita(int numeritos[], int largoDelArray){

    for(int i = 0; i < largoDelArray; i++){

        for (int j = 0; j < largoDelArray - 1; j++){

            if (numeritos[j] > numeritos[j + 1]){

                int datoTemporal = numeritos[j];
                numeritos[j] = numeritos[j + 1];
                numeritos[j + 1] = datoTemporal;
            }
        }
    }
}


int main (){

    int numeritos[] = {8, 32, 14, 16, 88, 90, 5};

    int largoArray = sizeof(numeritos)/sizeof(*numeritos); /// Recordar que el asterisco es el puntero

    cout << "El array desordenado es: ";
    for (int i = 0; i < largoArray; i++){
        cout << numeritos[i] << " ";
    }

    cout << endl << endl;

    burbujita(numeritos, largoArray);

    cout << "El array ordenado es: ";
    for (int i = 0; i < largoArray; i++){
        cout << numeritos[i] << " ";
    }

return 0;
}
