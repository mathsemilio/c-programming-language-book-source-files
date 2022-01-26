#include <stdio.h>

void main() {
    float celsius, fahr;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;

    while (celsius <= upper) {
        fahr = (celsius * 1.8) + 32;
        printf("%3.0f %3.0f\n", celsius, fahr);
        celsius = celsius + step;
    }
}