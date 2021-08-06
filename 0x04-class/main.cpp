#include <iostream>
#include <string>

using namespace std;

class Persona {
    private:
        string nombre;
        int edad;

    public:
        Persona(string n, int e) {
            nombre = n;
            edad = e;
        }
        ~Persona() {
            cout << "destructor" << endl;
        }
        void saludo() {
            cout << "Hola " << nombre << endl;
        }
};

int main() {
    Persona p = Persona("Juan", 24);
    Persona p2 = Persona("Pedro", 22);

    // delete p2; solo con punteros.

    p.saludo();
    p2.saludo();
}