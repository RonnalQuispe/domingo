#include <stdio.h>

int main() {
    int numero, digito, mayor = 0;
 // Leer el numero entero
    printf("Ingrese un numero entero:\n ");
    scanf("%d\n", &numero);
    // Obtener cada dígito del numero y determinar el mayor
    while (numero != 0) {
        digito = numero % 10;  // Obtener el ultimo digito del numero
        if (digito > mayor) {
            mayor = digito;  // Actualizar el valor del mayor digito encontrado
        }
        numero /= 10;  // Eliminar el ultimo digito del numero
    }

    // Mostrar el mayor dígito encontrado
    printf("El mayor digito del numero ingresado es: %d\n", mayor);
    
   

    return 0;
}
