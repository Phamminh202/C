#include<stdio.h>
int main()
{
	int x,num1,num2,z;
	z=0;
	
	printf("Nhap num1:");
	scanf("%d",&num1);
	printf("Nhap num2:");
	scanf("%d",&num2);
	
	for(x=num1;x<=num2;x++)
	{
		if(x%2!=0)
			z=z+x;
	}
	printf("Tong cac so le=%d\t",z);
}
