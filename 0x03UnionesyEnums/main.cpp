#include <iostream>
#include <string>

using namespace std;

int main() {
    // sirve para almacenar diferentes tipos de datos,
    //que comparten memoria y no existen al tiempo
    union numero_letra {
        int numero;
        char letra;
    };

    numero_letra abc = {'A'};

    cout << "abc como numero: " << abc.numero << endl;
    cout << "abc como letra: " << abc.letra << endl;

    enum calendario {
        lunes = 'l', martes = 'm', miercoles = 'w'
    };

    enum calendario today = martes;
    cout << (char)today << endl;
}