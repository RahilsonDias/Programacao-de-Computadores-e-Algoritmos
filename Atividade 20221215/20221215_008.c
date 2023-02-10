#include <stdio.h>

int main() {
    float temp_far, temp_cel;
    
    printf("Temperatura (Celsius): ");
    scanf("%f", &temp_cel);
    
    temp_far = (9/5) * temp_cel + 32;
    
    printf("Temperatura (Fahrenheit): %.2f", temp_far);

    return 0;
}