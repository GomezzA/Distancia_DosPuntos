#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float X2, X1, Y2, Y1, d, A, B, A1, B1;
	printf("\t Punto 1: ");
	printf("\n\n Ingrese X1: ");
	scanf("%f", &X1);
	printf("\n Ingrese Y1: ");
	scanf("%f", &Y1);
	printf("\n\t Punto 2: ");
	printf("\n\n Ingrese X2: ");
	scanf("%f", &X2);
	printf("\n Ingrese Y2: ");
	scanf("%f", &Y2);
	A=X2-X1;
	B=Y2-Y1;
	A1=A*A;
	B1=B*B;
	d=sqrt(A1+B1);
	printf("\n La distancia es %.2f", d);
	return 0;
}
