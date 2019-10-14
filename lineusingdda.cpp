#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<iostream.h>
void main()
{

int gd=DETECT,gm;
int x1,x2,y1,y2,i;
float x,y,steps,dx,dy;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

cout<<"Enter first point (x1,y1)";
cin>>x1>>y1;
cout<<"Enter second point (x2,y2)";
cin>>x2>>y2;
dx=(float)(x2-x1);
dy=(float)(y2-y1);

if(dx>=dy)
{steps=dx;
}
else
{steps=dy;
}

dx=dx/steps;
dy=dy/steps;
x=x1;
y=y1;
for(i=1;i<=steps;i++)
{
 putpixel(x,y,RED);
 x+=dx;
 y+=dy;
}
getch();
closegraph();

}



