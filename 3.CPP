#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
int x,y,r,xc,yc;
initgraph(&gd,&gm,"C:\\TurboC3\\bgi");
x=0;
printf("Enter XC,YC,Radius of Circle:\t");
scanf("%d%d%d",&xc,&yc,&r);
y=r;
while(x<=y)
{
putpixel(xc+x,yc+y,4);
putpixel(xc+y,yc+x,2);
putpixel(xc-x,yc+y,3);
putpixel(xc-y,yc+x,5);
putpixel(xc-y,yc-x,5);
putpixel(xc-x,yc-y,3);
putpixel(xc+x,yc-y,8);
putpixel(xc+y,yc-x,4);
x=x+1;
y=sqrt(r*r-x*x);
}
getch();
}


