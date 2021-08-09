#include <iostream>
#include <string>

using namespace std;

class Animal {
    protected:
        static int numeroAnimales;
        string alimento = "carne";
    
    public:
        Animal();
        ~Animal();
        static int getNumeroAnimales();
        string obtenerAlimento() {
            return alimento;
        };
        void comer(Animal *a) {
            cout << "Este animal esta comiendo " << a->alimento << "... umm umm " << endl;
        };

};

int Animal::numeroAnimales = 0;

Animal::Animal() {
    cout << "Creando nuevo animal..." << endl;
    numeroAnimales += 1;
}

Animal::~Animal() {
    cout << "Borrando animal.." << endl;
    numeroAnimales -= 1;
}

int Animal::getNumeroAnimales() {
    return numeroAnimales;
}

class Herviboro : public Animal {
    public:
        Herviboro() : Animal() {
            this->alimento = "plantas";
        }
    void pastar() {
        cout << "Este animal esta pastando" << endl;
    }
};

class Carnivoro : public Animal {
    public:
        Carnivoro() : Animal() {
            this->alimento = "carne";
        }
        void cazar() {
            cout << "Este animal esta cazando.." << endl;
        }
};

class Omnivoro : public Herviboro, public Carnivoro {
    public:
    Omnivoro() : Herviboro(), Carnivoro() {
        numeroAnimales -=1;
    }
    void comer() {
        cout << "este animal esta comiendo" << endl;
    }

};

int main() {
    Animal *a = new Animal();
    Herviboro *h = new Herviboro();
    Carnivoro *c = new Carnivoro();
    Omnivoro *o = new Omnivoro();

    cout << "Numero de animales: " << Animal::getNumeroAnimales() << endl;

    a->comer(h);
    h->pastar();
    //h->comer();
    c->cazar();
    //c->comer();
    a->comer(c);
    cout << "omnivoro" << endl;
    //o->comer();

    delete a;

    cout << "Numero de animales es: " << Animal::getNumeroAnimales() << endl;
}