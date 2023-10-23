#include <stdio.h>//  incluye la biblioteca estándar de entrada/salida para la función printf
int main(void){
    int x, y;
    float prom2, prom5, smult2, smul5;
    printf("Ingrese el valor de x: ");
    scanf("%d", &x);

    printf("Ingrese el valor de y: ");
    scanf("%d", &y);

    smult2 = x * (x + 1); // Suma de los primeros x múltiplos de 2
    smul5 = y * (y + 1) * 5; // Suma de los primeros y múltiplos de 5

    prom2 = (float)smult2 / (2 * x);
    prom5 = (float)smul5 / (5 * y);

    printf("El promedio de los primeros %d múltiplos de 2 es: %.2f\n", x, prom2);
    printf("El promedio de los primeros %d múltiplos de 5 es: %.2f\n", y, prom5);

    if (prom2 > prom5)
        printf("El promedio de los primeros %d multiplos de 2 es mayor que los primeros %d múltiplos de 5.\n", x, y);
    else if (prom2 < prom5)
        printf("El promedio de los primeros %d multiplos de 2 es menor que los primeros %d múltiplos de 5.\n", x, y);
    else
        printf("El promedio de los primeros %d multiplos de 2 es igual al promedio de los primeros %d múltiplos de 5.\n", x, y);

    return 0;// Finaliza el programa devolviendo 0 desde la función principal
}

