#include <iostream>
using namespace std;

int main() {
    int n; 
    int cantidad;
    double precio;
    double subtotal = 0;
    double impuesto;
    double total;

    cout << "Cuantos productos? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Cantidad: ";
        cin >> cantidad;
        cout << "Precio: ";
        cin >> precio;
        subtotal = subtotal + cantidad * precio;
    }

    impuesto = subtotal * 0.08;
    total = subtotal + impuesto;

    if (total > 100) {
        cout << "Descuento 10% aplicado." << endl;
        total = total * 0.9;
    }

    cout << "Subtotal: " << subtotal << endl;
    cout << "Impuesto: " << impuesto << endl;
    cout << "Total: " << total << endl;

    return 0;
}
