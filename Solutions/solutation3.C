/* write a program to enter any number and check it is palingdrome number or not */
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b=0,c;
	clrscr();
	printf("\n Enter any number");
	scanf("%d",&a);
	c=a;
	while(a>0)
	{
		b=b*10;
		b=b+a%10;
		a=a/10;
	}
	if(c==b)
	{
		printf("\n This is a palingdrome number",c);
	}
	else
	{
		printf("\n this is not a palingdrome number",c);
	}
	getch();
}
