#include<iostream>
#include<graphics.h>
using namespace std;
class vishal
{
        public:
               void plot(int xc,int yc,int x,int y)
               {        	
               		delay(5);
                        putpixel(xc+x,yc+y,1);// x,y y,x -x,y -y,x  -x,-y -y,-x x,-y y,-x
                        delay(5);
                        putpixel(xc+y,yc+x,2);
                        delay(5);
                        putpixel(xc-x,yc+y,3);
                        delay(5);
                        putpixel(xc-y,yc+x,4);
                        delay(5);
                        putpixel(xc-x,yc-y,5);
                        delay(5);
                        putpixel(xc-y,yc-x,6);
                        delay(5);
                        putpixel(xc+x,yc-y,7);
                        delay(5);
                        putpixel(xc+y,yc-x,8);
                }
};                                       
int main()
{       
        vishal c;
        int gd=DETECT,gm,xc,yc,r,x,y,d;
        initgraph(&gd,&gm,NULL);
        cout<<"Enter the center co-ordinate"<<endl;
        cin>>xc>>yc;
        cout<<"Enter the readius"<<endl;
        cin>>r;
        x=0;
        y=r;
        c.plot(xc,yc,x,y);
        d=3-2*r;
        while(x<=y)
        {
                if(d<0)
                {
                        x=x+1;
                        y=y;
                        d=d+4*x+6;
                }
                else
                {
                        x=x+1;
                        y=y-1;
                        d=d+4*(x-y)+10;
                }
                 c.plot(xc,yc,x,y);
        }
        delay(10000);
        closegraph(); 
        return 0;
}
