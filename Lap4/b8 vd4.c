#include<stdio.h>
#include<conio.h>

void main()
{
	int num1,num2,res;
	char op;
	num1=90;
	num2=33;
	op='-';
	switch(op)
	{
		case'+':
			res=num1+num2;
			printf("\nThe Sum is:%d",res);
		break;
		case'-':
			res=num1-num2;
			printf("\nNumber after Subtraction:%d",res);
		break;
		case'/':
			res=num1/num2;
			printf("\nnNumber after Division:%d",res);
		break;
		case'*':
			res=num1*num2;
			printf("\nnNumber after multiplication:%d",res);
		break;
		default:
			printf("Invalid");
			break;
}
		
	}
