#include <stdio.h>
#include "Conversion.h"

int main() {
    printf("Fahrenheit to Celsius:\n");
    printf("----------------------\n");
    for (double fahrenheit = -40.0; fahrenheit <= 212.0; fahrenheit += 10.0) {
        double celsius = Celsius(fahrenheit);
        printf("%.1f°F = %.1f°C\n", fahrenheit, celsius);
    }

    printf("\nCelsius to Fahrenheit:\n");
    printf("----------------------\n");
    for (double celsius = -40.0; celsius <= 100.0; celsius += 10.0) {
        double fahrenheit = Fahrenheit(celsius);
        printf("%.1f°C = %.1f°F\n", celsius, fahrenheit);
    }

    return 0;
}
