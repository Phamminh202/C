#include<stdio.h>
int check(int num);
main()
{
	int num,a;
	
	printf("Chuong trinh hien so chia het cho 50");
	printf("\nNhap 10 so:");
	for(a=1;a<=10;a++)
	{
		printf("\nSo thu %d:",a);
		scanf("%d",&num);	
		check(num);
	}	
}
check(int num)
{
	if(num%50==0)
		printf("%d",num);
}
