#include <stdio.h>//  incluye la biblioteca estándar de entrada/salida para la función printf
int main(void){
    int x, y; // declaracion de variables
    float prom2, prom5, smult2, smul5;
    printf("Ingrese el valor de x: ");
    scanf("%d\n", &x);

    printf("Ingrese el valor de y: ");
    scanf("%d\n", &y);
    smult2 = x * (x + 1); // Suma de los primeros x multiplos de 2
    smul5 = y * (y + 1) * 5; // Suma de los primeros y multiplos de 5
    printf("El promedio de los primeros %d múltiplos de 2 es: %.2f\n", x, prom2);
    printf("El promedio de los primeros %d múltiplos de 5 es: %.2f\n", y, prom5);
    return 0;// Finaliza el programa devolviendo 0 desde la funcion principal
}

