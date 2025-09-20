#include <stdio.h>

int main() {
    double P, r, t, A;
    int n;

    printf("Ingrese el capital inicial (P): ");
    scanf("%lf", &P);

    printf("Ingrese la tasa de interes anual (r en decimal, ej: 0.05 para 5%%): ");
    scanf("%lf", &r);

    printf("Ingrese el numero de veces que se aplica el interes al año (n): ");
    scanf("%d", &n);

    printf("Ingrese el numero de años (t): ");
    scanf("%lf", &t);

    int total = n * t;
    double factor = 1 + r / n;
    A = P;
    for (int i = 0; i < total; i++) {
        A *= factor;
    }

    printf("El monto final es: %.2f\n", A);
    return 0;
}

