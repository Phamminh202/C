#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Nhap so cuoi:");
	scanf("%d",&a);
	for(b=0;b<a;b++)
	{
		printf("\n");
		for(c=0;c<=b;c++)
		printf("%d",c+1);
	}
}
