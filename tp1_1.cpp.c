#include<stdio.h>


int main()
{
    int numero = 20;
    int *p_numero;
    int tama;

    printf("hola mundo");

    p_numero = &numero;
    tama = sizeof(numero);


    printf("\nContenido del puntero: %d",*p_numero);
    printf("\nDireccion de memoria almacenada por el puntero: %p",p_numero);
    printf("\nLa direccin de memora de la varible: %p",&numero);
    printf("\nel tamaño de memoria utilizado por la variable : %d",tama);

    return 0;
}