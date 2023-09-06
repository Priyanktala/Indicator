#include<stdio.h>

void rev(int *a,int b)
{
	int *start=a;
	int *end=a+b-1;
	
	while(start<end)
	{
		int temp=*start;
		*start=*end;
		*end=temp;
		start++;
		end--;
	}
}

main()
{
	int n,i;
	printf("Enter Array Size=");
	scanf("%d",&n);
	
	int a[n];
	
	printf("Enter %d element=\n",n);
	for(i=0; i<n; i++);
	{
		scanf("%d",a[i]);
	}
	rev(a,n);
	
	printf("Reversed Array=");
	for(i=0; i<n; i++);
	{
		printf("%d",a[i]);
	}
	return 0;
}