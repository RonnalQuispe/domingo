#include <stdio.h>

int main() {
    int num1, num2, primerDigito1, primerDigito2, productoMutuo;
// Leer los dos números enteros
    printf("Ingrese el primer numero entero: ");
    scanf("%d\n", &num1);

    printf("Ingrese el segundo numero entero: ");
    scanf("%d\n", &num2);

    // Obtener el primer digito de cada numero
    primerDigito1 = num1;
    while (primerDigito1 >= 10) {
        primerDigito1 /= 10;
    }

    primerDigito2 = num2;
    while (primerDigito2 >= 10) {
        primerDigito2 /= 10;
    }

        // Calcular el producto mutuo de los primeros dígitos
    productoMutuo = primerDigito1 * primerDigito2;
// Mostrar el resultado
    printf("El producto mutuo del primer dígito de cada número es: %d\n",productoMutuo);
    return 0;
}
