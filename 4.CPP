#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>

void main()
{
int gd=DETECT,gm;
int x,y,r,angle,xc,yc;
initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
x=0;
angle=0;
printf("Enter XC,YC,Radius of the circle:\t");
scanf("%d%d%d",&xc,&yc,&r);
y=r;

while(angle<=360)
{
 putpixel(xc+x,yc+y,4);
 x=r*cos(angle);
 y=r*sin(angle);
 angle=angle+1;
}
getch();
}