#include<stdio.h>
int check(char gt,int ns);
int say();
void Break();
void love();
main()
{
	char name[150];
	int ns;
	char gt;
	
	printf("Nhap thong tin cua ban:");
	printf("\nHo va ten:");
	gets(name);

	check(gt,ns);
}
int check(char gt,int ns)
{
	printf("Nam sinh:");
	scanf("%d",&ns);
	fflush(stdin);
	printf("Gioi tinh:g/b:");
	scanf("%c",&gt);
	if(gt=='g')
	{
		if(ns<=2002&&ns>=1990)
		{
			say();
		}else{
			printf("Xl cta k thuoc ve nhau");
		}
	}else{
		printf("No");
	}
}
say()
{
	int i;
	char y;
	for(i=1;i<10;i++)
	{
		printf("\nFall in love %d <3",i);
	}
	fflush(stdin);
	printf("\nDo you love me?\ny/n:");
	scanf("%c",&y);
	if(y=='y')
	{
		love();	
	}else if(y='n')
	{
		Break();
	}else
	{
		printf("Sai ki tu.");
	}
}
love()
{
	int i,j,n=15;
	system("cls");
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
			for(j=1;j<=n;j++)
			{
				printf("*");
			}
			for(j=1;j<=n;j++)
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
Break()
{
	printf("\nThank you for the last time\nToT");
}

