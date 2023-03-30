
#include<stdio.h>

main()
{
	int r,c,s;
	for(r=1;r<=5;r++)
	{
		for(s=5;s>r;s--)
		{
			printf(" ");
		}

		for(c=1;c<=r;c++)
		{
			if(c%2==1)
		{
			printf("1");
		}else
		{
		printf("0");

		}
		
		}
			printf("\n");
	}	

}
