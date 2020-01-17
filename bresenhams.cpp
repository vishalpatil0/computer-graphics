#include<iostream>
#include<graphics.h>
using namespace std;
int main()
{
 	int gd=DETECT,gm;
	float x1,x2,y1,y2,x,y,xinc,yinc,dx,dy,step;
	initgraph(&gd,&gm,NULL);
	cout<<"Enter the value for x1,y1  and x2,y2 "<<endl;
	cin>>x1>>y1>>x2>>y2;
	line(320,0,320,480);
	line(0,240,620,240);
	if(x1>x2 || y1>y2)
	{
		int temp,temp1;
		temp=x1;
		x1=x2;
		x2=temp;

		temp1=y1;
		y1=y2;
		y2=temp1;		
	}
	dx=x2-x1;
	dy=y2-y1;
	if(abs(dx)>=abs(dy))
	{	
		step=abs(dx);
	}
	else
	{
		step=abs(dy);
	}
	xinc=dx/step;
	yinc=dy/step;
	x=x1;
	y=y1;

	putpixel(320+x,240-y,RED);
	for(int i=1;i<=step;i++)
	{
		x=x+xinc;
		y=y+yinc;
		putpixel(320+round(x),240-round(y),RED);	
	}
	delay(100000);
	closegraph();
	return 0;
}
