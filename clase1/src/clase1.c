/*
 ============================================================================
 Name        : clase1.c
 Author      : CarlosLopez
 Version     :1.0
 Copyright   : Your copyright notice
 Description : Primera Clase de Programacion 1 in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//Ejemplo de Entrada y Salida de Datos por Consola en C



int main()
{
int a;
int b;
int c;
float div;
float dec;
//int res;
setbuf(stdout, NULL);

a=5;
b=2;

dec= 2.8;
c=dec;

printf("la variable c %.2f", (float)c);

div=(float)a/b;

printf("\n la variable div %.2f", div);



/*

int main()
{

int a;
int b;
int res;

setbuf(stdout,NULL);
//SUMAR

printf("SUMAR-Ingrese un valor para la variable a: \n");
scanf("%d",&a);

printf("\nIngrese un valor para la variable b: \n");
scanf("%d",&b);
res = a+b;

printf("\nEl resultado de la suma de a+b es: %d \n", res);

// RESTAR

printf("\nRESTAR-Ingrese un valor para las variables a y b: \n");
scanf("%d""%d",&a,&b);
res = a-b;

printf("\nEl resultado de la resta de a-b es: %d \n", res);
*/









return 0;









}
