#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159265359


float volumeesfera(float r){

    float volume;

    volume = (PI * 4 * (r*r*r))/3;

return volume;
}

float circunferenciaesfera (float r){

    float circunferencia;

    circunferencia = PI * (r + r);

return circunferencia;
}

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
