#include<stdio.h>
#include<conio.h>
void main()
{
	int g,k,d;
  clrscr();
	printf("\n enter the value is");
	scanf("%d%d%d",&g,&k,&d);
	if(g>k&&g>d)
	printf("\n tha value of max%d",g);
	if(k>g&&k>d)
	printf("\n tha value of max %d",k);
	if(d>g&&d>k)
	printf("\n the value of max%d",d);
	getch();
}
