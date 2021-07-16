#include <iostream>

using namespace std;

int main() {
    char letra = 'A';
    char *pointer = &letra;
    cout << (int *) &letra << endl;
    cout << (int *) pointer << endl;
    cout << *pointer;

}