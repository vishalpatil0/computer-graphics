#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

class dda
{
        public:
                void dotline(int x1,int y1,int x2,int y2)
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
                                if(i%2==0)
                                {
                                putpixel(x,y,RED);
                                }
                        }
                }
                void dashline(int x1,int y1,int x2,int y2)
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
                                if(i%9<7)
                                {
                                putpixel(x,y,RED);
                                }
                        }
                }
                 void dash_dotline(int x1,int y1,int x2,int y2)
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
                                if(i%9<6 || i%9==7)
                                {
                                putpixel(x,y,RED);
                                }
                        }
                }
                 void thick_line(int x1,int y1,int x2,int y2)
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
        
        int gd=DETECT,gm,xc,yc,r;
        initgraph(&gd,&gm,NULL);
        int x1,y1,x2,y2;
        cout<<"Enter the two co ordinate for dot line"<<endl;
        cin>>x1>>y1>>x2>>y2;

        dda d;
        d.dotline(x1,y1,x2,y2);
         cout<<"Enter the two co ordinate for dash line "<<endl;
        cin>>x1>>y1>>x2>>y2;
        d.dashline(x1,y1,x2,y2);
          cout<<"Enter the two co ordinate for dash dot line "<<endl;
        cin>>x1>>y1>>x2>>y2;
        d.dash_dotline(x1,y1,x2,y2);
         cout<<"Enter the two co ordinate for thick line "<<endl;
        int thick;
        cout<<"Enter the thickness"<<endl;
        cin>>thick;
        cin>>x1>>y1>>x2>>y2;
        int dx,dy;
        dx=x2-x1;
        dy=y2-y1;
        int wy,wx;
        if(dx>dy)
        {
               wy=((thick-1)*sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1))))/(2*abs(x2-x1));
                for(int i=0;i<wy;i++)
                {
                 d.thick_line(x1,y1+i,x2,y2+i);
                   d.thick_line(x1,y1-i,x2,y2-i);
                }
        }
        else
        {
                 wx=((thick-1)*sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1))))/(2*abs(y2-y1));
                for(int i=0;i<wx;i++)
                {
               d.thick_line(x1+i,y1,x2+i,y2);
                   d.thick_line(x1-i,y1,x2-i,y2);
                }                
        }
        
           delay(100000);
        closegraph(); 
        return 0;
}
      
