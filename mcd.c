#include <stdio.h>

int main() {
    int a, b;

    printf("Ingrese el primer numero: ");
    scanf("%d", &a);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    printf("El MCD es: %d\n", a);
    return 0;
}