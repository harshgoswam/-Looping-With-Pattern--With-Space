
#include<stdio.h>

main()
{
	char r,c,s;
	for(r='A';r<='E';r++)
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
