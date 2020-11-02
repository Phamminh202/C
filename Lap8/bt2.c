#include<stdio.h>
#include<string.h>
int main()
{
	int ngay,i,j,len,n=15;
	char name[150];
	char tl;
	len=strlen(name);
	printf("What's your name?\n");
	gets(name);
	
	for(ngay=1;ngay<=100;ngay++)
	{
	printf("\nFall in love %d",ngay);
	}
	
	do
	{
		printf("\nDo you love me?");
	scanf("%c",&tl);
	}while(tl!='Y');

	for(i=n/2;i<=n;i+=2)
	{
		for(j=1;j<n-i;j+=2)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
		
		
	for(i=n;i>=1;i--)
	{
		for(j=i;j<n;j++)
		{
			printf(" ");
		}
		if(i==n)
		{
			for(j=1;j<=(n*2-len)/2;j++)
			{
				printf("*");
			}
			printf("%s",name);
			for(j=1;j<(n*2-len)/2;j++)
			{
				printf("*");
			}
		}
		else
		{
			for(j=1;j<=(i*2)-1;j++)
			{
				printf("*");
			}
		}
		printf("\n");
	}		
}
