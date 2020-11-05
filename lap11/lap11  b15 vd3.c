#include<stdio.h>
main()
{
	int ctr;/*ctr is global*/
	void blk1(void);
	void blk2(void);
	void main(void)
	{
		ctr=10;
		blk1();
	}
	void blb1(void)
	{
		int rct;
		if(ctr>8)
		{
			rct=rct+1;
			blk2();
		}
	}
	void bkl2(void)
	{
		int ctr;
		ctr=0;
	}
}
