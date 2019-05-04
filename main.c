#include <stdio.h>

void main()

{

    float kilometers;
    float price_per_km;
    float final_price;

    printf("How many kilometeres do you want to travel?\n");
    scanf("%f",&kilometers);

    final_price = kilometers * 10.50;

    printf("Your price per kilometer is $%f",final_price);



}