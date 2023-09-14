#include <iostream>
#include <string>
using namespace std;

string convertirARomano(int numero) {
    string resultado;
    int valores[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    string simbolos[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    int i = 0; //indice de la lista

    while (numero > 0) {
        int cantidad = numero / valores[i];
        numero = numero % valores[i];
        for (int j = 0; j < cantidad; j++) {
            resultado += simbolos[i];
        }
        i++;
    }
    return resultado;
}

int main() {
    int opcion;
    int numero;
    do {
        cout << "INGRESE UNA OPCION:" << endl;
        cout << "1) convertir a numero romano" << endl;
        cout << "2) salir" << endl;
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "ingrese un numero entero entre el 0 y el 3999: ";
                cin >> numero;
                cout << "numero romano: " << convertirARomano(numero) << endl;
                break;
            case 2:
                cout << "saliendo del programa" << endl;
                break;
            default:
                cout << "opcion invalida" << endl;
                break;
        }
    } while (opcion != 2);
    return 0;
}
