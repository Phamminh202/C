/*Integer constants as case labels*/
#include<stdio.h>
void main()
{
	int basic;
	printf("\nPlease enter your basic:");
	scanf("%d",&basic);
	switch(basic)
	{
		case200:
			printf("\nBonus is dollar %d\n",50);
			break;
		case300:
			printf("\nBonus is dollar %d\n",125);
			break;
		case400:
			printf("\nBonus is dollar %d\n",140);
			break;
		case500:
			printf("\nBonus is dollar %d\n",175);
			break;
		default:
			printf("\nInvalid entry");
			break;
	}
}
