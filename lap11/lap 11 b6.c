#include<stdio.h>
float chuvi(float cd ,float cr);
float dientich(float cd,float cr);
main()
{
	float cd,cr;
	int ch;
	printf("Nhap chieu dai:");
	scanf("%f",&cd);
	printf("\nNhap chieu rong:");
	scanf("%f",&cr);
	
	printf("\n1.Chu vi\n2.Dien tich\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			chuvi(cd,cr);
			printf("\nChu vi HCN la:%f",chuvi(cd,cr));
			break;
		case 2:
			dientich(cd,cr);
			printf("\nDien tich HCN la:%f",dientich(cd,cr));
			break;
		default:
			printf("Sai ki tu.");
}
}
float chuvi(float cd,float cr)
{
	float cv=(cd+cr)*2;
	return cv;
}
float dientich(float cd,float cr)
{
	float dt=cd*cr;
	return dt;
}
