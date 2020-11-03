#include<stdio.h>
int main()
{
	int arr[10],i;
	for(i=0;i<10;i++)
	{
		printf("Nhap mang %d:",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i+=2)
	printf("arr[%d]\t",i);
	
}	
