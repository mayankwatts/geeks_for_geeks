#include<stdio.h>
#include<conio.h>
void main()
{
	int a[20],b[20],i=0,j=0,k=0;
	printf("enter name\n");
	scanf("%s",a[20]);
	printf("enter name to see common letters\n");
	scanf("%s",b[20]);
	while(a[i]!='\0')
	{
		while(b[j]!='\0')
		{
			if(a[i]==b[j])
			{
			    b[i]=2;
			    k++;
			}
			j++;
		}
		i++;
	}
	printf("%d",k);
	getch();
}
