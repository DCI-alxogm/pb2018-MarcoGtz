#include <stdio.h>

int main()
{
	int a;
	printf("introduce un numero\n");
	scanf("%i",&a);
	if(a%2==0){
		a=a+1;
	}
	else{
	printf("ese número es impar\n");
	}
	printf("%i\n",a);
}
