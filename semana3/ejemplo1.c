#include <stdio.h>

int main()
{
	int a;

	printf("introduce un numero\n");
	scanf("%i",&a);
	if(a%2==0){
		printf(" a=%i es par\n",a);
	}
	else{
		printf(" a=%i es impar\n",a);
	}
	return 0;
}
