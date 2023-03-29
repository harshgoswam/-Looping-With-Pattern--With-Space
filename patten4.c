#include<stdio.h>
main()
{
	int c,r,s;
	for(r=5;r>=1;r--)
     {
     	for(s=0;s<r;s++)
     	{
     		printf(" ");
		 }
       for(c=5;c>=r;c--)
       {
       		printf("%d",c);
	   }
	   printf("\n");
	 }
}
