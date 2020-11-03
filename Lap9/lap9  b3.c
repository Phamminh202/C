#include<stdio.h>
int main()
{
	int arr[10];
	int i,max,min,sum;
	float avg; 
	int count=0,count2=0;
	
	for(i=0;i<10;i++)
	{
		printf("\nArr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	min=arr[0];

	for(i=0;i<10;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		sum+=arr[i];
	}
	printf("\nSo lon nhat la %d",max);
	for(i=0;i<10;i++)
	{
		if(max==arr[i]){
		count+=1;}
	}
	printf("\tva xuat hien %d lan.",count);

	printf("\n So nho nhat la %d",min);
	for(i=0;i<10;i++)
	{
		if(min==arr[i]){
		count2+=1;}
	}
	printf("\tva xuat hien %d lan.",count2);
	printf("\nTong=%d",sum);
	avg=sum; 
	printf("\nTrung binh=%f",avg/10); 
}
