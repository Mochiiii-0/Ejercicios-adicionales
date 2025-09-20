#include <stdio.h>
int main() {
    int numeros[5] = {3, 7, 1, 9, 5};
    int suma = 0;
    for (int i = 0; i < 5; i++) {
        suma += numeros[i];
    }
    printf("La suma de los elementos es: %d\n", suma);
    return 0;
}
