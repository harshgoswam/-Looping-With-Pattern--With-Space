
#include<stdio.h>

main()
{
	char r,c,s;
	for(r='E';r>='A';r--)
	{
		for(s='E';s>r;s--)
		{
			printf(" ");
		}

		for(c='A';c<=r;c++)
		{
			printf("%c",c);
		}
			printf("\n");
	}	

}
