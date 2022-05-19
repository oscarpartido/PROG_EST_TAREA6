/* Autor: Oscar Vivaldi Partido Ramirez, realizado: 06/02/2022			
	tarea 1 programa que calculara el area de una ESFERA  
	*/
#include <stdio.h>
#include<math.h>
#include<Cmath>


int main(){
	//declaracion de variables 
	float R, area, Volumen ;

	//entrada de datos
	printf("ingrese el valor del radio(R):  ");
	scanf("%f", &R);

	//proceso 
	area=4*M_PI*pow(R, 2);
	Volumen=4*M_PI*pow(R, 3)/3;
	
	//SALIDA
	printf("el area de la esfera es: %f m2 \nEl volumen de la esfera es: %f m3",area, Volumen  );

return 0;
}

