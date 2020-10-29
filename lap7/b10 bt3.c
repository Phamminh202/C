#include<stdio.h>
int main()
{
	int x,y,z;
	printf("Nhap x=");
	scanf("%d",&x);
	for(y=1;y<=10;y++)
	{
		z=x*y;
		printf("%d*%d=%d\n",x,y,z);
	}
}
