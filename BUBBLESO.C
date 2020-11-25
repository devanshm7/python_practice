#include<stdio.h>
#include<conio.h>
void bubblesort(int arr[],int n)
{
	int i,round,temp;
	for(round=1;round<n;round++)
	{
		for(i=0;i<n-round;i++)
		{
			if(arr[i]>arr[i+1])
			{
			 temp=arr[i];
			 arr[i]=arr[i+1];
			 arr[i+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}
void main()
{
	int arr[]={1,3,7,8,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	clrscr();
	bubblesort(arr,n);
	getch();

}