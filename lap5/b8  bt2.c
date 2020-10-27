#include<stdio.h>
int main()
{
	char a;
	printf("Nhap ki tu:");
	scanf("%c",&a);
	switch(a)
	{
	case 'A':
		printf("Ada");
		break;
	case 'a':
		printf("Ada");
		break;
	default:
		printf("Khong co ngon ngu lap trinh tuong ung");
		break;
	}
	return 0;
}
