#include<stdio.h>
#include<conio.h>
void main()
{
	int i=0,n;
	clrscr();
	printf("how many times do want to see the name jatin\n");
	scanf("%d",&n);
	clrscr();
	do
	{
		printf("jatin\n");
		i++;
	}
		while(i<n);
	getch();
}
