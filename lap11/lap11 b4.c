#include <stdio.h>
int i;
void nhap(int a[], int n) 
{
	for(i=0; i<n; i++) 
	{
		printf("\nNhap a[%d]= ",i);
		scanf("%d",&a[i]);
	}
}

void xuat(int a[], int n) {
	for( i=0;i<n; i++) {
		printf("%d\t",a[i]);
	}
}
void indexMin(int a[], int n) 
{
	int max=a[0];
	int d=0;
	for(i=0; i<n; i++) 
	{
		if(a[i]<max)
		{
			 max=a[i];
			 d=i;
		}
	}
	
	printf("\nGTNN cua mang la %d",max);
	printf("\nGTNN nam tai vi tri %d",d+1);
}
int main() 
{
	int n;
	printf("\nNhap so phan tu cua mang: ");
	scanf("%d",&n);
	
	int a[n];
	nhap(a,n);
	printf("\nMang vua nhap la: \n");
	xuat(a,n);
	indexMin(a,n);
	return 0;
}
