#include<stdio.h>
int nhapso(int a,int b);
int sum(int a,int b);
int sub(int a,int b);
int multi(int a,int b);
double div(int a,int b);
void menu(int ch);
int main()
{
	int ch;
	menu(ch);
	return;	
}
menu(int ch)
{
	int a,b;
	printf("TINH TOAN");
	printf("\n============");
	printf("\n1.Nhapso\n2.Tinh tong\n3.Tinh hieu\n4.Tinh tich\n5.Tinh thuong\n6.Thoat");
	printf("\n============");
	printf("\nChon:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			nhapso(a,b);
			break;
		case 2:;
			sum(a,b);
			break;
		case 3:	
			sub(a,b);
			break;
		case 4:
			multi(a,b);
			break;
		case 5:	
			div(a,b);
			break;
		case 6:
			break;
		default:
			printf("Sai ki tu.");
	}
}
nhapso(int a,int b)
{
	printf("\nNhap a:");
	scanf("%d",&a);
	printf("\nNhap b:");
	scanf("%d",&b);
}
sum(a,b)
{
	printf("\nNhap a:");
	scanf("%d",&a);
	printf("\nNhap b:");
	scanf("%d",&b);
	printf("\nTong=%d",a+b);
}
sub(a,b)
{
	printf("\nNhap a:");
	scanf("%d",&a);
	printf("\nNhap b:");
	scanf("%d",&b);
	printf("\nHieu=%d",a-b);
}
multi(a,b)
{
	printf("\nNhap a:");
	scanf("%d",&a);
	printf("\nNhap b:");
	scanf("%d",&b);
	printf("\nTich=%d",a*b);
}
double div(a,b)
{
	printf("\nNhap a:");
	scanf("%d",&a);
	printf("\nNhap b:");
	scanf("%d",&b);
	if(b!=0)
		printf("\nThuong=%d",a/b);
	else
		printf("\nKhong the thuc hien voi so 0");
}
