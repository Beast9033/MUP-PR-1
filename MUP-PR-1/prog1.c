#include<stdio.h>

int main()
{
    
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("\n Temperature in Fahrenheit: %.1f", fahrenheit);
    
    return 0;
}