#include <stdio.h>

int i;
void nhap(int a[],int n)
{
	for(i=0; i<n; i++)
	{
		printf("\nNhap a[%d] = ",i);
		scanf("%d",&a[i]);
	}
}
void xuat(int a[],int n)
{
	for(i=0; i<n; i++)
	{
		printf("%d\t",a[i]);
	}
}
void reverse(int a[], int n)
{
	for(i=n-1; i>=0; i--)
	{
		printf("%d\t",a[i]);
	}
}
int main()
{
	int n; 
	printf("\nNhap so phan tu cua mang: ");
	scanf("%d",&n);
	
	int a[n];
	nhap(a,n);
	printf("\nPhan tu vua nhap la: \n");
	xuat(a,n);
	printf("\nPhan tu hien thi nguoc lai la: \n");
	reverse(a,n);
	return 0;
}
