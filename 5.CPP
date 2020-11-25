#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void main()
{
int x,y,x1,y1,x2,y2;
float t,r;
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
printf("\t\tTriangle Before Rotation\n");
printf("Enter Triangle Axis & Coordinates:- ");
scanf("%d%d%d%d%d%d",&x,&y,&x1,&y1,&x2,&y2);
printf("Triangle is: ");
line(x,y,x1,y1);
line(x1,y1,x2,y2);
line(x2,y2,x,y);
printf("Enter Angle of rotation: ");
scanf("%f",&r);
t=r*3.14/180;
x=abs(x*cos(t)-y*sin(t));
y=abs(x*sin(t)+y*cos(t));
x1=abs(x1*cos(t)-y1*sin(t));
y1=abs(x1*sin(t)+y1*cos(t));
x2=abs(x2*cos(t)-y2*sin(t));
y2=abs(x2*sin(t)+y2*cos(t));
printf("Triangle after rotation is: ");
line(x,y,x1,y1);
line(x1,y1,x2,y2);
line(x2,y2,x,y);
getch();
closegraph();
}