#include<stdio.h>
void main()
{
	int x;
	char i,ans;
	i='Y';
	do{
		x=0;
		ans='y';
		printf("\nEnter sequence of character:");
		do{
			i=getchar();
			x++;
		}while(i!='\n');
		i='Y';
		printf("\nNumber of character entered is:%d",--x);
		printf("\nMore sequences (Y\N)?");
		ans=getch();
		}while(ans=='Y'||ans=='y');
}
	
