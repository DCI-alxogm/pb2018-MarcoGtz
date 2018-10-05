#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, sum = 0;
	int *num;

	printf("Introduce 6 números enteros:\n");
	num=(int*) malloc(sum * sizeof(int));
	
	for(i=0;i<6;++i)
	{
	// (num + i) es equivalente a
	scanf("%d",&num[i]);
	&num[i];
	// *(num + i) es equivalente a num[i]
	sum +=num[i];
	}

	printf("Suma = %d\n", sum);

return 0;
}
