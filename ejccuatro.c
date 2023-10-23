#include <stdio.h>

int main()
{
    int numero, factorial = 1;
    // Leer el numero
    printf("Ingrese un numero: ");
    scanf("%d\n", &numero);
    // Calcular el factorial
    for (int i = 1; i <= numero; i++)
    {
        factorial *= i;
    }
    // Mostrar el resultado
    printf("El factorial de %d es: %d\n", numero, factorial);

    return 0;
}
