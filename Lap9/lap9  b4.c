#include<stdio.h>
int main()
{
	char arr[5][30];
	int a,row;
	
	for(row=0;row<5;row++)
	{
		printf("\nNhap ten hs %d:",row+1);
		gets(arr[row]);
	}
	printf("\nDanh sach hs la:");
	for(a=0;a<5;a++)
	{
		printf("\n\t%d.%s",a+1,arr[a]);
	}
	
}
