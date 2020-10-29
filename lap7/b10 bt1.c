#include<stdio.h>
int main()
{
	int x,z;
	char y[150];
	printf("Nhap ten:");
	gets(y);
	printf("\nNhap tuoi:");
	scanf("%d",&z);
	for(x=1;x<=z;x++)
	{
		printf("%d.%s\t",x,y);
	}
}
