#include<iostream.h>
#include<string.h>
#include<conio.h>
void small(int arr[],int arr_size)
{
	int i,first,second;
	int Max=1000;
	first=second=Max;
	for (i=0;i<arr_size;i++)
	{
		if(arr[i]<first)
		{
		second=first;
		first=arr[i];
		}
		else if(arr[i]<second && arr[i]!=first)
		{
		second=arr[i];
		}
	}
	if (second==Max)
	cout<<"There's no second highest value";
	else
		cout<<"\nSmallest: "<<first;
		cout<<"\nSecond Smallest: "<<second;
}
void main()
{
	int arr[]={1,6,3,8,7,34,6,7};
	clrscr();
	int arr_size=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<arr_size;i++)
	{cout<<" "<<arr[i];
	}
	small(arr,arr_size);
	getch();
}