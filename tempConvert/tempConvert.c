#include <stdio.h>

/*
kelvin = celsius + 273.15
fahrenheit = celsius * 1.80 + 32.00

*/

int main(){

    float celsius;
    float temp[2];
    printf("Digite: ");
    scanf("%f", &celsius);
    celsius = abs(celsius);

    temp[0] = celsius + 273.15;
    temp[1] = (celsius * 1.80) + 32.00;

    int length = sizeof(temp) / sizeof(temp[0]);
    for(int i = 0; i < length; i++){
        printf("%f\n", temp[i]);
    }


    return 0;
}
