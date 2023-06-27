#include <stdio.h>
#include <assert.h>
#include "Conversion.h"

void testCelsius() {
    assert(Celsius(32.0) == 0.0);
    assert(Celsius(212.0) == 100.0);
    assert(Celsius(98.6) == 37.0);
    assert(Celsius(-40.0) == -40.0);
}

void testFahrenheit() {
    assert(Fahrenheit(0.0) == 32.0);
    assert(Fahrenheit(100.0) == 212.0);
    assert(Fahrenheit(37.0) == 98.6);
    assert(Fahrenheit(-40.0) == -40.0);
}

int main() {
    testCelsius();
    testFahrenheit();
    printf("All tests passed!\n");
    return 0;
}
