#include <stdio.h>

/*
    Ejercicio 1-6. Verifique que la expresión getchar ( ) ! = EOF es 0 o 1.
*/

int main(){
    int verificacion = getchar() != EOF;
    printf("El valor de la expresion es: %d", verificacion); // El valor es 1 para todos los caracteres ingresados
}