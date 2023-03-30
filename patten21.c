
#include<stdio.h>

main()
{
	int r,c,s;
	for(r=5;r>=1;r--)
	{
		for(s=5;s>r;s--)
		{
			printf(" ");
		}

		for(c=1;c<=r;c++)
		{
			if(r%2==1)
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
