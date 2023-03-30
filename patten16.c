
#include<stdio.h>

main()
{
	int r,c,s;
	for(r='E';r>='A';r--)
	{
		for(s='E';s>r;s--)
		{
			printf(" ");
		}

		for(c=r;c>='A';c--)
		{
			printf("%c",c);
		}
			printf("\n");
	}	

}
