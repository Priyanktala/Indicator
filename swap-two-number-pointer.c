#include<stdio.h>

swap(int *p, int *p1)
{
	int temp;
	temp=*p;
	*p=*p1;
	*p1=temp;
	
	printf("Swap Value of A=%d\n",*p);
	printf("Swap Value of B=%d\n",*p1);
	
}

main()
{
	int a,b;
	printf("Enter Value of A=");
	scanf("%d",&a);
	printf("Enter Value of B=");
	scanf("%d",&b);
	
	swap(&a,&b);
}