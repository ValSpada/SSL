/* hello.c
 * My first hello world !
 * Valentín Francisco Spada
 * 2025-04-02
*/

#include <stdio.h>

int main(){
    FILE *salida;

    salida = fopen("output.txt", "w");
    fputs("Hello, world!", salida);
    fclose(salida);
}