#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm,x,y;
initgraph(&gd,&gm,"C:\\turboc3\\bgi");
x=getmaxx();
y=getmaxy();
printf("%d%d",x,y);
outtexyxy(x/2,y/2,"Devansh Mathur");
}
