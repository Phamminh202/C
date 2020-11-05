#include<stdio.h>
int getarea(float a,float b,float c);
main()
{
	float a,b,c;
	printf("Nhap do dai canh a:");
	scanf("%f",&a);
	printf("Nhap do dai canh b:");
	scanf("%f",&b);
	printf("Nhap do dai canh c:");
	scanf("%f",&c);
	
	getarea(a,b,c);
}
getarea(float a,float b,float c)
{
	if(a+b>c&&a+c>b&&b+c>a)
	{
		float p,s;
		p=(a+b+c)/2;
		s=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("\nDien tich tam giac la:%f",s);
	}
	else
	{
	printf("Khong hop le.");
	}	
}
