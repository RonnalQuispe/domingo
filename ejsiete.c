#include <stdio.h> //  Incluye la biblioteca estándar de entrada/salida para la función printf.

int main(void)
{          //  Comienza la función principal.
    int l; // Declarar una variable entera 'l' para el bucle
    for (l = 20; l <= 200; l++)
    { //  Inicia un bucle 'for' desde 20 hasta 200, incrementando en "l" 1 en cada iteración.
        if (l % 2 == 0)
        { //  Comprueba si 'l' es par utilizando el operador módulo.
            printf("%d, ", l);
        } //  Si 'l' es par, imprímelo seguido de una coma y un espacio.
    }
    return 0; // Finaliza el programa devolviendo 0 desde la funcion principal
}