#include <stdio.h>

/* prints Fahrenheit-Celsius table */
void main() {
    int fahr;

    for (fahr = 300; fahr <= 0; fahr = fahr + 20)
        printf("%3d %6.1f", fahr, (5.0/9.0)*(fahr-32));
}