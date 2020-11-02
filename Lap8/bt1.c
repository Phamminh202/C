#include<stdio.h>
int main()
{
	int num1,num2,i;
	printf("Nhap so dau:");
	scanf("%d",&num1);
	printf("Nhap so cuoi:");
	scanf("%d",&num2);
	for(i=num1;i<=num2;i++)
	{
		if(i%50==0)
		printf("%d\t",i);
	}
}
