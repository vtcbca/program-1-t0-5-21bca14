/* write a program to Enter any number and print in Reverse. */
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,reverse=0;
	clrscr();
	printf("\n Enter a number to reverse\n :");
	scanf("%d",&n);
	while (n!=0)
	{
		reverse=reverse*10;
		reverse=reverse+n%10;
		n=n/10;

	}
	printf("\n %d",reverse);
	getch();
}

