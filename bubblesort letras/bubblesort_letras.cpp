/// BUSQUEDA BURBUJA LETRAS

#include <iostream>

using namespace std;

void burbujita(char letra[], int largoDelArray){

    for (int i = 0; i < largoDelArray; i++){
        for (int j = 0; j < largoDelArray - 1; j++){
            if (letra[j] > letra[j + 1]){
                char datoTemporal = letra[j];
                letra[j] = letra[j + 1];
                letra[j + 1] = datoTemporal;
            }
        }
    }

}




int main (){

char letras[] = {'j', 'b', 'r', 'z', 'a'};

int largoArray = sizeof(letras)/sizeof(*letras);

cout << "El array desordenado seria: ";
for (int i = 0; i < largoArray; i++){
    cout << letras[i] << " ";
}

cout << endl << endl;

burbujita(letras, largoArray);

cout << "El array ordenado seria: ";
for (int i = 0; i < largoArray; i++){
    cout << letras[i] << " ";
}

return 0;
}
