#include<stdio.h>
int main()
{
	int n,i,j,p,e,r;
	
	printf("Enter Any Number");
	scanf("%d",&n);
	printf("Enter End Number");
	scanf("%d",&e);
	p=n;
	r=e/n;
	for(i=n;i<=r-1;i++)
	{	
		for(j=n;j<=i;j++)
		{
			if(p<=e)
			{
		printf("%d\t",p);
		p++;
			}
	}
	
	printf("\n\n");
	}
}
