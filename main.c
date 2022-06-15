#include <stdio.h>
#include <stdlib.h>



void main() 
{
	int ary[10];
	int i, total,hight;
	for(i=0;i<=10;i++)
		{
			printf("\nEnter value: %d ",i+1);scanf("\t %d",&ary[i]);
		}
	hight = ary[0];
	for(i=1;i<10;i++)
		{
			if(ary[i]>hight)
			hight = ary[i];
		}
	printf("\nHightest........... %d",hight);
	printf("\nThe average........ %d",total/i);	
	return 0;
}
