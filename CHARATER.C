#include<stdio.h>
#include<conio.h>
void pail()
{
	int i;
	char a,arr[20];
	for(i=0;i<20;i++)
	{
		scanf("%c",&arr[i]);
	if(arr[i]=='$')
		break;
	}
	for(i=0;arr[i]!='$';i++)
	{
		printf("%c",arr[i]);
	}
}
void main()
{
clrscr();
	pail();
getch();
}