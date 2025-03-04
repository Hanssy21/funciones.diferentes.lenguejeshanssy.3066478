#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Multiplicación de dos vectores
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {6, 7, 8, 9, 10};
    vector<int> c;

    // Multiplicando los elementos de los dos vectores
    for (int i = 0; i < a.size(); i++) {
        c.push_back(a[i] * b[i]);
    }

    // Imprimir el resultado de la multiplicación
    for (int i = 0; i < c.size(); i++) {
        cout << c[i] << " ";
    }
    cout << endl;

    // Funciones

    // Definición y llamada
    void mostrarTexto() {
        cout << "Hola" << endl;
    }

    mostrarTexto();

    // Ámbito de las variables
    int x = 5, y = 8;

    void multiplicar() {
        // Usamos las variables globales 'x' y 'y'
        cout << x * y << endl;
    }

    multiplicar();

    // Usar return
    int multiplicarReturn() {
        int a = 5, b = 8;
        return a * b;
    }

    int resultado = multiplicarReturn();
    cout << resultado + 5 << endl;

    // Trabajar con valores devueltos
    bool validarDato() {
        int a = 5;
        if (a == 5) {
            return true;
        } else {
            return false;
        }
    }

    bool dato = validarDato();
    cout << (dato ? "true" : "false") << endl;

    return 0;
}