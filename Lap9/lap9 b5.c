#include<stdio.h>
int main()
{
	int a,b,sum=0;
	char diem[5][30];
	
	printf("Nhap diem cua sinh vien\n\t");

	for(a=0;a<4;a++)
	{
		printf("\nMon %d:\n",a+1);
		printf("\nHoc sinh thu %d:\n",a+1);
		for(b=0;b<3;b++)
		{
			printf("\t\tDiem thu %d: ",b+1);
			scanf("\t%d",&diem[a][b]);
		}
	}
	printf("\nTB diem:");
	for(a=0,sum=0;a<4;a++)
	{
		for(b=0;b<3;b++)
		{
			sum+=diem[a][b];
			if(b=2)
			{
				printf("\nHoc sinh %d:",a+1);
				printf("%d",sum/3);
			}
		}
	}
}
