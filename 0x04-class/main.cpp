#include <iostream>
#include <string>

using namespace std;

class Persona {
    public:
        string nombre = "Juan";
        int edad = 24;
        void saludo(string n) {
            cout << "Hola " << n << endl;
        }
};

int main() {
    Persona p = Persona();
    Persona p2 = Persona();

    p2.nombre = "Pedro";

    cout << p.nombre << endl;
    p.saludo(p.nombre);
    p2.saludo(p2.nombre);
}