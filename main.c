#include <stdio.h>

void main()

{

    float kilometros;
    float preciofinal;

    printf("Cuantos Kilometros deseas recorrer?\n");
    scanf("%f",&kilometros);

    preciofinal = kilometros * 10.50;

    printf("Tu precio por Kilometro es $%f",preciofinal);



}
