#include<stdio.h>
int main()
{
	int x,y,z,w;
	x=0;
	y=1;
	printf("Nhap so cuoi:");
	scanf("%d",w);
	for(;;)
	{
		z=x+y;
		x=y;
		y=z;
		printf("%d\t",z);
	}
}
