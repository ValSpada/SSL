# include <stdio.h>

/* 
    Ejercicio 1-3. M odifique el program a de conversión de tem peraturas de modo
    que escriba un encabezado sobre la tabla.
*/

int main(){
    float fahr, celsius;
    int lower, upper, step;

    lower = 0 ; 
    upper = 300; 
    step = 2.0 ; 

    fahr = lower;

    printf("\nFahrenheit  Celsius\n");

    while (fahr <= upper){
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%10.0f %11.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}