#include <stdio.h>
#include<conio.h>
void main()
{
	char r[20];
	int i,count=0;
	printf("enter the string:");
	scanf("%r",r);
	for(i=0;r[i]!='\0';i++)
	{
		if(r[i]>='0' && r[i]<='9')
		{
			count=count+1;
		}
	}
	printf("\n%d",count);
	return 0;
