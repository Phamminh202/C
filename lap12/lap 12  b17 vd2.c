#include<stdio.h>
void main()
{
	char name[20];
	/*name is declared as a singer dimesional character array*/
	
	/*Clears the screen*/
	puts("Enter your name:");/*Displays a message*/
	scanf("%s",&name);	/*Accepts the input*/
	printf("Hi there:%s",name);	/*Displays the input*/
	getch();
}
