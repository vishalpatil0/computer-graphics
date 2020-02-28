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

int main()
{                       
      
        int gd=DETECT,gm,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,y1,y2,y3,y4,y5,y6,y7,y8,y9,y10,y11,y12;
        initgraph(&gd,&gm,NULL);
        cout<<"Enter the x1 and y1"<<endl;
        cin>>x1>>y1;
        cout<<"Enter the x2 and y2"<<endl;
        cin>>x2>>y2;
        cout<<"Enter the x3 and y3"<<endl;
        cin>>x3>>y3;
        cout<<"Enter the x4 and y4"<<endl;
        cin>>x4>>y4;
        x5=(x1+x4)/2;
        y5=(y1+y4)/2;
        x6=(x1+x2)/2;
        y6=(y1+y2)/2;
        x7=(x2+x3)/2;
        y7=(y2+y3)/2; 
        x8=(x3+x4)/2;
        y8=(y3+y4)/2;
        x9=(x5+x8)/2;
        y9=(y5+y8)/2; 
        x10=(x5+x6)/2;
        y10=(y5+y6)/2;
        x11=(x6+x7)/2;
        y11=(y6+y7)/2;
        x12=(x7+x8)/2;
        y12=(y7+y8)/2;
        dda d;
        d.line1(x1,y1,x2,y2);
        d.line1(x2,y2,x3,y3);
        d.line1(x3,y3,x4,y4);
        d.line1(x1,y1,x4,y4);
        d.line1(x5,y5,x6,y6);
        d.line1(x6,y6,x7,y7);
        d.line1(x7,y7,x8,y8);
        d.line1(x8,y8,x5,y5);
        d.line1(x10,y10,x11,y11);
        d.line1(x11,y11,x12,y12);
        d.line1(x12,y12,x9,y9);
        d.line1(x9,y9,x10,y10);      
        delay(10000);
        closegraph(); 
        return 0;
}
