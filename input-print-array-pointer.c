#include<stdio.h>

int main()
{
	int n,i;
	
	printf("Enter Array Size=");
	scanf("%d",&n);
	
	int arr[n];
	
	int *ptr=arr;
	
	printf("Enter %d element=\n",n);
	for(i=0; i<n; i++);
	{
		scanf("%d",ptr+i);
	}
	printf("Array element=");
	for(i=0; i<n; i++);
	{
		printf("%d",*(ptr+i));
	}
	return 0;
	
}

