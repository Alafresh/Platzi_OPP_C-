#include <iostream>
#include <string>

using namespace std;

class Persona {
    private:
        string nombre;
        int edad;

    public:
        static int numeroPersonas;
        Persona(string nombre, int edad);
        ~Persona() {
            cout << "destructor" << endl;
        }
        Persona &cambiarNombre(string nombre) {
            this->nombre = nombre;
            return *this;
        }
        Persona &cambiarEdad(int edad) {
            this->edad = edad;
            return *this;
        }
        void saludo() {
            cout << "Hola soy " << nombre << " y mi edad es "<< edad << endl;
        }
};

int Persona::numeroPersonas = 0;
Persona::Persona(string nombre, int edad) {
            this->nombre = nombre;
            this->edad = edad;
            numeroPersonas += 1;
        }

int main() {
    Persona p = Persona("Juan", 24);
    Persona p2 = Persona("pedro", 24);
    
    cout << "Numero de personas " << Persona::numeroPersonas << endl;

    p.cambiarNombre("Guillermo").cambiarEdad(15);
    // delete p; solo con punteros.

    p.saludo();
    
}