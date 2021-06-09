#include <stdio.h>
#include <stdlib.h>

int main(){

    double raio, x, y, resultado;
    double coordenadas, ponto; // coordenadas = coordenadas do centro do circulo e ponto = ponto a ser testado

    printf ("Digite as cordenadas dos circulos: \n");
    scanf ("%lf", &coordenadas);
    printf ("Digite o raio do circulo: \n");
    scanf ("%lf", &raio);
    printf ("Digite o ponto a ser testado: \n");
    scanf ("%lf", &ponto);


    x = coordenadas * 3.14; // aqui indicaremos o calculo de x para descobrirmos o valor dele
    y = (raio * raio) * ponto * 3.14; // aqui indicaremos que y é o resultado de raio elevado ao quadrado vezes ponto a ser testado vezes pi.
    resultado = x + y; // e aqui teremos o resultado do ponto determinante que seria cordenadas x ponto


    printf ("O ponto determinante e de: %.2lf \n", resultado);


    return 0;
}