#include <stdio.h>

/*
    Ejercicio 1-2. Experimente el descubrir qué pasa cuando la cadena del argumento
    de printf contiene \c , en donde c es algún carácter no puesto en lista anteriormente.
*/

int main(){
    printf("hola, mundo \c"); // Tira una advertencia de sequencia de escape desconocida.
}