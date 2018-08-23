/*Este programa recibe una coordenada cartesiana (x,y,z) y lo convierte a una coordenada esférica (r,θ,φ).
Creado el 20/08/2018 por Marco Gutiérrez.*/
#include <stdio.h>
#include <math.h>

int main()
{
	float x, y, z;
	float r, a, b;

	printf("Dame una coordenada cartesiana (x,y,z):\n");
	scanf("%f", &x);
	scanf("%f", &y);
	scanf("%f", &z);
	printf("Tu coordenada cartesiana es: (%f,%f,%f)\n", x, y, z);

	r= sqrt((pow(x,2))+(pow(y,2))+(pow(z,2)));
	a= (acos((z/r)))*(180/3.141592);
	b= (atan((y/x)))*(180/3.141592);

	printf("Tus coordenadas esféricas (r,θ,φ) son: (%f,%f°,%f°,)\n", r, a, b);

	return 0;
}
