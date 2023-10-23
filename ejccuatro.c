#include <stdio.h>

int main() {
    int numero, factorial = 1;
 // Leer el número
    printf("Ingrese un número: ");
    scanf("%d\n", &numero);
    // Calcular el factorial
    for (int i = 1; i <= numero; i++) {
        factorial *= i;
    }



   
    return 0;
}
