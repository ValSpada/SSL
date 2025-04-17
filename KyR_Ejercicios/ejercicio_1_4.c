# include <stdio.h>

/* 
    Ejercicio 1-4. Escriba un program a que imprima la tabla correspondiente Celsius
    a Fahrenheit.
*/

int main(){
    float fahr, celsius;
    int lower, upper, step;

    lower = 0 ; 
    upper = 300; 
    step = 2.0 ; 

    celsius = lower;

    printf("\nCelsius  Fahrenheit\n");

    while (celsius <= upper){
        fahr = ((9.0/5.0) * celsius) + 32.0;
        printf("%7.0f %11.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}