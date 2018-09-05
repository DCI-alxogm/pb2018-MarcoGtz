/*Este programa calcula el factorial de un número dado ppor el usuario.
Programa creado el 05/09/2018 por Marco Gutiérrez.*/
#include<stdio.h>

int main()
{
int n,i,x,respuesta=1;

while(respuesta==1)
{
	printf("Dame un número para hacer el factorial:\n");
	scanf("%i",&n);
	x=n;

	if(n>1){
		for(i=n;i>1;i--)
		{
		n=n*(i-1);
		}
		printf("El factorial de %i es: %i\n",x,n);
	}else{
		if(n<0){
		printf("Ese numero no tiene factorial\n");
		}else{
		printf("El factorial de %i es: 1\n",x);
		}
	}

printf("¿Desea hacer otro factorial?\n");
printf("presiona 1 para si\npresiona 2 para no\n");
scanf("%i",&respuesta);
}
	return 0;
}

