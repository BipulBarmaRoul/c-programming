#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr;
	ptr = (int *)malloc(2*sizeof(int));
	for(int i=0; i<2; i++)
	{
		printf("enter the value of %d element:\n", i);
		scanf("%d", &ptr[i]);
	}
	for(int i=0; i<2; i++)
	{
		printf("the value of %d element is:%d\n", i, ptr[i]);
	}
}


