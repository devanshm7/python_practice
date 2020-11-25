#include<stdio.h>
#include<conio.h>
int min(int ar[],int k,int n)
{
	int loc,j,Min;
	Min=ar[k];
	loc=k;
	for(j=k+1;j<=n-1;j++)
	{
		if(Min>ar[j])
		{
			Min=ar[j];
			loc=j;
		}
	}
	return (loc);
}
void main()
{
	int ar[]={1,8,2,7,9,4,6};
	int k,temp,Loc;
	int n=sizeof(ar)/sizeof(ar[0]);
	clrscr();
	for(k=0;k<n-1;k++)
	{
		Loc=min(ar,k,n);
		temp=ar[k];
		ar[k]=ar[Loc];
		ar[Loc]=temp;
	}
	for(k=0;k<n;k++)
	{
		printf("%d ",ar[k]);
	}
	getch();
}