#include <iostream>
#include <string>

using namespace std;

struct Persona {
    string nombre;
    int edad;
};

int main() {
    // separa espacio en la memoria, stack
    Persona p = Persona();
    p.nombre = "Juan";
    p.edad = 24;
    cout << p.nombre << endl;
    cout << p.edad << endl;
    // crea una nueva persona de forma dinamica, heap
    Persona *pe = new Persona();
    pe->nombre = "Juan G";
    pe->edad = 24;
    cout << pe->nombre << endl;
    cout << pe->edad;
}