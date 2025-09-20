#include <iostream>
#include <iomanip> // para setprecision

using namespace std;

int main() {
    double P, r, t, A;
    int n;

    cout << "Ingrese el capital inicial (P): ";
    cin >> P;

    cout << "Ingrese la tasa de interes anual (r en decimal, ej: 0.05 para 5%): ";
    cin >> r;

    cout << "Ingrese el numero de veces que se aplica el interes al anio (n): ";
    cin >> n;

    cout << "Ingrese el numero de anios (t): ";
    cin >> t;

    int total = n * t;
    double factor = 1 + r / n;
    A = P;

    for (int i = 0; i < total; i++) {
        A *= factor;
    }

    cout << fixed << setprecision(2);
    cout << "El monto final es: " << A << endl;

    return 0;
}
