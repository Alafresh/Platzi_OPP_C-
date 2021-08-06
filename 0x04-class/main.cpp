#include <iostream>
#include <string>

using namespace std;

class Persona {
    public:
        string nombre;
        int edad;

        Persona(string n, int e) {
            nombre = n;
            edad = e;
        }
        ~Persona() {
            cout << "destructor" << endl;
        }
        void saludo(string n) {
            cout << "Hola " << n << endl;
        }
};

int main() {
    Persona p = Persona("Juan", 24);
    Persona p2 = Persona("Pedro", 22);

    // delete p2; solo con punteros.

    cout << p.nombre << endl;
    p.saludo(p.nombre);
    p2.saludo(p2.nombre);
}