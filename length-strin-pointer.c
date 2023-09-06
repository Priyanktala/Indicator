#include<stdio.h>
int main()
{
	char s[100], *p;
	int count;
	
	printf("Enter any String=");
	gets(s);
	
	p=s;
	
	count=0;
	
	while(*p!=NULL)
	{
		count++;
		p++;
	}
	printf("Length of String=%d",count);
	
	return 0;
}