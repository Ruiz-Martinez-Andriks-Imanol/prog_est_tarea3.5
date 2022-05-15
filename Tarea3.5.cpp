/* Autor: Andriks Imanol Ruiz Martínez, Realizado: 03/02/2022 
Escuela: Universidad del Valle de Mexico Campus Villahermosa
Materia: Programación Estructrada
Ciclo: 01/2022

Este es un programa de ciclos y condicionales en Lenguaje C de la materia de Programación Estructurada
Muestra el uso de:

    -Variables flotantes
    -printf para mostrar mensajes y variables
    -scanf
    -El uso de include para las librerías
    -Ciclos
    -Contador
    -Condicionales
    -Comentarios para la documentación interna del programa
*/
#include<stdio.h>
#include<math.h>
int main() {
	//Declaración
	float a, r;
	//Proceso
	printf("Area del circulo \n");
	printf("\t Introduce el radio de la esfera: ");
	scanf("%f", &r);
	if (r !=0) { //Condicionales
	   a=M_PI*pow(r,2);
	   printf("El area del circulo es %.2f: ", a);
	}
   else while (r <= 0) { //Condicional con ciclo
   	           printf("repetir proceso \n");
   	           printf("\t Introduce el radio de la esfera: "); //Salida
	           scanf("%f", &r);
	if (r !=0) {
	   a=M_PI*pow(r,2);
	   printf("El area del circulo es %.2f: ", a); //Salida
   }
}
	return 0;	
}
