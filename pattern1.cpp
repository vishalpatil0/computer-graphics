#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

class dda
{
        public:
                void line1(int x1,int y1,int x2,int y2)
                {
                        if(x1>x2  || y1>y2)
                        {
                                int temp,temp1;
                                temp=x1;
                                x1=x2;
                                x2=temp;
                                
                                temp1=y1;
                                y1=y2;
                                y2=temp1;
                        }
                        float dx,dy,x,y,xinc,yinc;
                        int step;
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
                        
                        putpixel(x,y,RED);
                        for(int i=1;i<=step;i++)
                        {
                                x=x+xinc;
                                y=y+yinc;
                                putpixel(x,y,RED);
                        }
                }
};                
class brsn_circle
{
        public:
                void circle1(int xc,int yc,int r)
                {
               int x,y,d;
                 x=0;
                y=r;
                         delay(5);
                        putpixel(xc+x,yc+y,1);// x,y y,x -x,y -y,x  -x,-y -y,-x x,-y y,-x 
                        delay(5);
                        putpixel(xc+y,yc+x,2); delay(5);
                        putpixel(xc-x,yc+y,3); delay(5);
                        putpixel(xc-y,yc+x,4); delay(5);
                        putpixel(xc-x,yc-y,5); delay(5);
                        putpixel(xc-y,yc-x,6); delay(5);
                        putpixel(xc+x,yc-y,7); delay(5);
                        putpixel(xc+y,yc-x,8); delay(5);
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
                        delay(5);
                        putpixel(xc+x,yc+y,1);// x,y y,x -x,y -y,x  -x,-y -y,-x x,-y y,-x 
                        delay(5);
                        putpixel(xc+y,yc+x,2); delay(5);
                        putpixel(xc-x,yc+y,3); delay(5);
                        putpixel(xc-y,yc+x,4); delay(5);
                        putpixel(xc-x,yc-y,5); delay(5);
                        putpixel(xc-y,yc-x,6); delay(5);
                        putpixel(xc+x,yc-y,7); delay(5);
                        putpixel(xc+y,yc-x,8); delay(5);
               }
               }
};        
int main()
{                       
        brsn_circle b;
        int gd=DETECT,gm,xc,yc,r;
        initgraph(&gd,&gm,NULL);
        cout<<"Outer circle data"<<endl<<endl;
        cout<<"Enter the center co-ordinate"<<endl;
        cin>>xc>>yc;
        cout<<"Enter the readius"<<endl;
        cin>>r;     
        //outer circle
        b.circle1(xc,yc,r);
        cout<<"inner circle data"<<endl<<endl;
        int ir=r/2;
        b.circle1(xc,yc,ir);
        int w=sqrt((r*r)-(ir*ir));
        dda d;
        d.line1(xc-w,yc+ir,xc+w,yc+ir);
        d.line1(xc+w,yc+ir,xc,yc-r);
        d.line1(xc,yc-r,xc-w,yc+ir);
        delay(10000);
        closegraph(); 
        return 0;
}
        
