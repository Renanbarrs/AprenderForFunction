#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159265359


float volumeesfera(float);

float circunferenciaesfera (float);

int main(){
    float raio;
    float volume;
    float circunferencia;

    printf("Raio da esfera: ");
    scanf("%f", &raio);

    volume = volumeesfera(raio);
    printf("\nO volume da esfera e igual a %.2f", volume);

    circunferencia = circunferenciaesfera(raio);
    printf("\nA circunferencia da esfera e igual a %.2f", circunferencia);

return 0;
}

float volumeesfera(float r){

    return (PI * 4 * (r*r*r))/3;
}

float circunferenciaesfera (float r){

    return PI * (r + r);
}
