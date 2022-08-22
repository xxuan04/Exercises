#include <stdio.h>

int main()
{
    double celsius, fahrenheit;
    
    printf("Enter a degree in Fahrenheit: ");
    scanf("%lf",&fahrenheit);
    
    // %f   %lf
    printf("Calculation: Celsius = (5.0/9.0) * (%.1lf - 32.0) ", fahrenheit);
    celsius = (5.0/9.0) * (fahrenheit - 32.0);
    
    printf("\nNew Degree in celsius is:%.01f ",celsius);
 
 
    
    
    return 0;
}
