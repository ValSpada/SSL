#include <stdio.h>

int main(){
    FILE *salida;

    salida = fopen("output.txt", "w");
    fputs("Hello, world!", salida);
    fclose(salida);
}