#include<stdio.h>
main()
{
	int intarr[5];
	float floatarr[10];
	int i,j;

	for(i=0;i<5;i++)
	{
		printf("\nNhap mang %d:",i);
		scanf("%d",&intarr[i]);
		floatarr[i]=intarr[i];
	}
	
	for(i=5;i<10;i++)
	{
		floatarr[i]=0;
	}
	
	for(j=0;j<5;j++){
	printf("%d\t",intarr[j]);}
	printf("\n");
	
	for(j=0;j<10;j++)
	{
		printf("%f\t",floatarr[j]);
	}
	
}

