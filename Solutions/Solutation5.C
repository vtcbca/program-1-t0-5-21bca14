/* write a program to Enter any number and check it is prime or not*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,no,c=0;
	clrscr();
	printf("\n Enter any number:");
	scanf("%d",&no);
	for (i=2; i<no; i++)
	{
		if(no%i==0)
		c=1;
		break;
	}
	if(c==1)
	{
		printf("\n no is not prime");
	}
	else
	{
		printf("no is prime");
	}
	getch();
}
