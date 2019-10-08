#include<stdio.h>
#include<conio.h>
void sort(int *a);
void display(int *a);
void main()
{
	int i,a[5]={3,2,1,4,5};
	clrscr();
	display(a);
	sort(a);
	display(a);
	getch();
}
void sort(int *a)
{
   int k,j,temp;
   for(j=0;j<5;j++)
   {
	for(k=0;k<4;k++)
	{
		if(a[k]>a[k+1])
		{
			temp=a[k];
			a[k]=a[k+1];
			a[k+1]=temp;
		}
	}
   }

}
void display(int *a)
{
	int i;
	for (i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
      printf("\n");
}
