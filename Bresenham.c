#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void bresenhem(int x1,int y1,int x2,int y2)
{
	int gm=DETECT,gd=DETECT;
	int dx,dy,xinc,yinc,x,y,e;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	dx=abs(x2-x1);
	dy=abs(y2-y1);
	if(x2>x1)
	{
		xinc=1;
	}
	else
	{
		xinc=-1;
	}
	if(y2>y1)
	{
		yinc=1;
	}
	else
	{
		yinc=-1;
	}
	x=x1;
	y=y1;
	putpixel(x1,y1,EGA_WHITE);
	if(dx>=dy)
	{
		e=((2*dy)-dx);
		while(x!=x2)
		{
		if(e<0)
		{
			e=e+(2*dy);
		}
		else
		{
			e=e+(2*(dy-dx));
			y=y+yinc;
		}
		x=x+xinc;
		putpixel(x,y,EGA_WHITE);
		}
	}
	else
	{
		e=(2*dx)-dy;
		while(y!=y2)
		{
			if(e<0)
			{
				e=e+(2*(dx));
			}
			else
			{
				e=e+(2*(dx-dy));
				x=x+xinc;
			}
			y=y+yinc;
			putpixel(x,y,EGA_WHITE);
		}
	}
}
void main()
{
clrscr();
int x1,x2,y1,y2;
printf("Enter the value of x1\n");
scanf("%d",&x1);
printf("Enter the value of y1\n");
scanf("%d",&y1);
printf("Enter the value of x2\n");
scanf("%d",&x2);
printf("Enter the value of y2\n");
scanf("%d",&y2);
bresenhem(x1,y1,x2,y2);
getch();
}