/*Input values are accepted from the user into the array ary[10]*/
#include<stdio.h>
void main()
{
	int ary[10];
	int i,total,high;
	for(i=0;i<10;i++)
	{
		printf("\nEnter value:%d:",i+1);
		scanf("%d",&ary[i]);
	}
	/*Displays highest of the entered value*/
	high=ary[0];
	for(i=1;i<10;i++)
	{
		if(ary[i]>high)
		high=ary[i];
	}
	printf("\nHighest value entered was %d",high);
	/*Prints average of value entered for ary[10]*/
	for(i=0,total=0;i<10;i++)
	total=total+ary[1];
	
	printf("\nThe average of the element of ary is %d",total/i);
}
