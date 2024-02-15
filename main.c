#include <stdio.h>
#include <stdlib.h>

int main()
{
    {float start, end, increment;

    printf("Enter the starting temperature in Fahrenheit: ");
    scanf("%f", &start);

    printf("Enter the ending temperature in Fahrenheit: ");
    scanf("%f", &end);

    printf("Enter the increment value: ");
    scanf("%f", &increment);

    printf("\nFahrenheit\tCelsius\n");
    printf("------------------------\n");

    for(float fahrenheit = start; fahrenheit <= end; fahrenheit += increment) {
        float celsius = (fahrenheit - 32) * 5 / 9;
        printf("%7.2f\t%7.2f\n", fahrenheit, celsius);
    }
    return 0;
    } }
