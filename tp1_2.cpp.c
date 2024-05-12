#include<stdio.h>

//punto a
int cuadradoNumero(int numero);
//punto b
void cuadradoNumero2(int numero);
//punto c
void recibirVariable(int numero);
//punto d
void Invertir(int a,int b);
//punto e
void orden(int a, int b);

int main()
{
    int n = 5;
    int b = 10;
    int cuadrado;

    cuadrado = cuadradoNumero(n);

    cuadradoNumero2(n);

    printf("\n%d",cuadrado);

    recibirVariable(n);

    Invertir(n,b);

    orden(n,b);






    return 0;
}

int cuadradoNumero(int numero)
{
    int cuadrado;
    cuadrado = numero * numero;

    return cuadrado;
}

void cuadradoNumero2(int numero)
{
    int cuadrado;
    cuadrado = numero * numero;

    printf("\n%d",cuadrado);
}

void recibirVariable(int numero)
{
    int *p_numero;
    p_numero = &numero;

    printf("\nDireccin de la variable: %p",p_numero);
    printf("\nContenido de la variable de la variable: %d",*p_numero);

}

void Invertir(int a,int b)
{
    int *p_a, *p_b,aux;

    p_a = &a;
    p_b = &b;
    aux = *p_a;

    *p_a = *p_b;
    *p_b = aux;


    printf("\nContenido a: %d",a);
    printf("\nContenido b: %d",b); 

}
void orden(int a, int b)
{
    int *p_a, *p_b,aux;

    p_a = &a;
    p_b = &b;

    if(*p_a < *p_b)
    {
        printf("\nContenido a: %d",*p_a);
        printf("\nContenido b: %d",*p_b); 
    }
    else{
        aux = *p_a;
        *p_a = *p_b;
        *p_b = aux;
        
        printf("\nContenido a: %d",*p_a);
        printf("\nContenido b: %d",*p_b); 
    }

}