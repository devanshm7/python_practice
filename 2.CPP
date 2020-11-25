#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
int gdriver=DETECT,gmode;
int x1,x2,y1,y2,length,dx,dy,x,y,i;
	initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");
	printf("enter x1 and y1");
	scanf("%d%d",&x1,&y1);
	printf("enter x2 and y2");
	scanf("%d%d",&x2,&y2);
	if(abs(x2-x1)>=abs(y2-y1))
	{
	length=abs(x2-x1);
	}
	else
	length=abs(y2-y1);
	dx=(x2-x1)/length;
	dy=(y2-y1)/length;
	x=x1+0.5;
	y=y1+0.5;
	i=1;
	while(i<=length)
	{
	 putpixel(x,y,WHITE);
	 x=x+dx;
	 y=y+dy;
	 i=i+1;
	 }


getch();
closegraph();
}