#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Nhap so cuoi:");
	scanf("%d",&a);
	for(b=a;b>0;b--)
	{
		printf("\n");
		for(c=1;c<=b;c++)
		{
			printf("%d",c);
		}
	}
}
