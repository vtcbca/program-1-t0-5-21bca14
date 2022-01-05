/* write a program Enter any number and print sum of its digit.
Date:22/12/21 */
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,sum=0;
	clrscr();
	printf("\n Enter a number");
	scanf("%d",&a);
	while (a>0)
	{
		b=a%10;
		sum=sum+b;
		a=a/10;
	}
	printf("\n sum is %d",sum);
	getch();
}
