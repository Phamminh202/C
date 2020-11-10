#include<stdio.h>
#include<string.h>
int login();
int menu(int tk,int sodu,int num);
int withdraw(int tk,int sodu,int num);
int transfer(int tk,int sodu,int num);
int check(int tk,int sodu,int num);

main()
{
	puts("Welcome to FPT Bank!");
	puts("Log in:");
	
	login();
	getch();
}
login()
{
	int tk,sodu,num;
	int name,mk;
	int count=0;
	
	do
	{
		printf("\nUsername:");
		scanf("%d",&name);
		if(name!=1)
		{
			puts("\nWrong username");
			puts("\nPlease re-enter");
		}
	}while(name!=1);
	 {
		printf("\nEnter password:");
		fflush(stdin);
		scanf("%d",&mk);
		if(mk!=2)
		{
			do
			{
				printf("\nPlese re-enter:");
				scanf("%d",&mk);
				fflush(stdin);
				if(mk==2)
				{	
					menu(tk,sodu,num);
					break;
				}else{
					count++;}
			}while(count<=1);
			{
				if(mk!=2)
				{
				printf("Your card has been locked.");
				goto label;
				}
			}
		}else{
			menu(tk,sodu,num);}
	}
	label:
	return 0;
}
menu(int tk,int sodu,int num)
{
	tk=2500000;
	int ch,a;
	while(a=1)	
	{
		printf("\nVui long chon chuc nang ban muon dung:");
		printf("\n\t1.Withdraw\n\t2.Transfer\n\t3.Check\n\t4.Exit");
		printf("\nBan chon:");
		scanf("%d",&ch);
		fflush(stdin);
		switch(ch)
		{
			case 1:
				withdraw(tk,sodu,num);
				break;
			case 2:
				transfer(tk,sodu,num);
				break;
			case 3:
				check(tk,sodu,num);
				break;
			case 4:
				printf("\nNhan ESC de thoat");
				getch();
				break;
			default:
				printf("\nSai ki tu");
				break;
		}
	}
}
withdraw(tk,sodu,num)
{
	char y;
	printf("\nTai khoan cua ban hien co %d",tk);
	printf("\nPhi rut tien la 50.000\nBan co muon tiep tuc:y/n:");
	scanf("%c",&y);
	if(y=='y')
	{
		printf("\nNhap so tien ban muon rut:");
		scanf("%d",&num);
		if(num<tk)
		{
			if(num<3000000-50000)
			{
				if(num%50000==0)
				{
					printf("\nRut tien thanh cong");
					printf("So tien con lai trong tai khoan la:%d",tk-num-50000);
					tk-=num;
					printf("\nNhan phim bat ki de tiep tuc hoac ESC de thoat");
					getch();	
				}else{
					printf("So tien duoc rut phai la boi so cua 50.000");
				}
			}else{
				printf("So tien duoc rut toi da la 3.000.000");
			}
		}else{
			printf("So tien duoc rut phai nho hon so tien trong tai khoan");
		}
	}else{
		printf("\nNhan phim bat ki de tiep tuc hoac ESC de thoat");
		getch();	
	}
}
transfer(tk,sodu,num)
{
	int stk;
	char y;
	printf("\nTai khoan cua ban hien co %d",tk);
	printf("\nPhi chuyen tien la 50.000\nBan co muon tiep tuc:y/n:");
	scanf("%c",&y);
	printf("\nNhap so tai khoan ban muon chuyen:");
	scanf("%d",stk);
	
	if(y=='y')
	{
		printf("\nNhap so tien ban muon chuyen:");
		scanf("%d",&num);
		if(num<tk)
		{
			if(num<3000000-50000)
			{
				if(num%50000==0)
				{
					printf("\nChuyen tien thanh cong");
					printf("So tien con lai trong tai khoan la:%d",tk-num-50000);
					tk-=num;
					printf("\nNhan phim bat ki de tiep tuc hoac ESC de thoat");
					getch();
				}else{
					printf("So tien duoc chuyen phai la boi so cua 50.000");
				}
			}else{
				printf("So tien duoc chuyen toi da la 3.000.000");
			}
		}else{
			printf("So tien duoc chuyen phai nho hon so tien trong tai khoan");
		}
	}else{
		printf("\nNhan phim bat ki de tiep tuc hoac ESC de thoat");
		getch();
	}
}
check(tk,sodu,num)
{
	printf("So tien trong the cua quy khach hien co %d",tk);
	printf("\nNhan phim bat ki de tiep tuc hoac ESC de thoat");
	getch();
}

