/* WRITE  a program to enter any number and check it is armstrong number or not */
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,r,sum=0,e=0,no;
	clrscr();
	printf("\n Enter any number:");
	scanf("%d",&r);
	no=r;
	while (r!=0)
	{
		a=r%10;
		e=a*a*a;
		r=r/10;
		sum=sum+e;
	}
	if(no==sum)
		printf("\n %d this is a armstrong number",no);
	else
		printf("\n %d this is not armstrong number",no);
	getch();
}