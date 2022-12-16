#include <stdio.h>

int main() {
    float temp_far, temp_cel;
    
    printf("Temperatura (Fahrenheit): ");
    scanf("%f", &temp_far);
    
    temp_cel = 5 * (temp_far - 32) / 9;
    
    printf("Temperatura (Celsius): %.2f", temp_cel);

    return 0;
}