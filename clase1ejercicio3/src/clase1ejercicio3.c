/*
 ============================================================================
 Name        : clase1ejercicio3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//Ejemplo de Operaciones lógicas en C
int main ()
{
	setbuf(stdout, NULL);
	//Declaración de variables
	int a;
	int b;
	int resultado;
// USO DE PSEUDO-BOOLEANOS
	//Inicialización de variables
	a = 1 ;
	b = 0 ;

	resultado = a && b ;
	printf("Resultado de a interseccion b es : %d",resultado);

	//Declaración de variables
	float variableA;
	float variableB;
	int resultadof;

	//Inicialización de variables
	variableA = 3.14;
	variableB = 5.5;

	resultadof = variableA < variableB;
	printf("\nResultado de la comparacion: %d \n",resultadof);

	system("PAUSE");

	// USO DEL IF

	int nota;
	int res;

	nota = 8;

	res = (nota >= 7);

	printf ("\nEl valor de res es: %d",res);

	if(res)
	{

		printf("El alumno está aprobado");

	}


	return 0;
}
