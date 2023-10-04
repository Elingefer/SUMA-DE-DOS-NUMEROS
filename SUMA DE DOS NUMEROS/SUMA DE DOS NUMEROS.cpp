#include <stdio.h>

int main() {
    int a;
    int s;
    int d;
    int f;

    printf("Introduce el valor de a porfavor: ");
    scanf_s("%i", &a);
    printf("Introduce el valor de s compita porfavor: ");
    scanf_s("%i", &s);

    d = a + s;
    f = a * s;

    printf("El resultado de la suma es de: %i y el resultado de la multiplicación es de: %i", d, f);
    printf(" GRACIAS POR PARTICIPAR INGENIERO");

    return 0;
}