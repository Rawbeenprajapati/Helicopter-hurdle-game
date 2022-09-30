#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
#include<iostream.h>
#include<math.h>
//rectangle(0,(getmaxy()/2)-200,(getmaxx()/2)+300,(getmaxy()/2)+200);
  void obs1(int cx,int cy,int first)
  {
    int wide=15,a;
    a=(cx+280)-first;
   // printf("%d\t",a);
  bar /* rectangle*/(a,cy+80,a+wide,cy+200);
  bar /* rectangle*/(a,cy-80,a+wide,cy-200);
    delay(105);
    cleardevice();
   }
void main()
{
char ch;
  int x,y,cx;
  float cy=0,v=0,lift=0,g=0.1,ya;//(g is correct)
  int gm,gd;
  gd=DETECT;
  initgraph(&gd,&gm,"C:\\TurboC3\\bgi");
  cx=getmaxx()/2;
  ya=getmaxy()/2;
  x=cx*2;
  y=getmaxy();

while(1)
{
   rectangle(0,ya-200,cx+300,ya+200);
 // rectangle(0,0,cx+320,y-50);
  int first=first+12;
   obs1(cx,ya,first);
  if(kbhit())
  {
     ch=getch();
     if(ch==72)
     {
	v=(lift+10);
	v=-v;
	cy+=v;
     }
    else if(ch==80)
   {
       v=0;
       g=0;
       g=g++;
      cy+=g;
     }
   }
   else
   {
      v+=g*5;
      cy+=v;
   }
     setcolor(WHITE);
  if(y<cy+166-7)
  {
   cy=0;
    v=0;
    }
  if(cy>y)
  {
  cy=y;
  v=0;
}

	setcolor(4);
  setfillstyle(1,12);
   pieslice(40,cy+153,0,90,20);   //outer front design

   setfillstyle(1,2);
   line(20,cy+143,40,cy+153);
   line(20,cy+143,40,cy+133);
   floodfill(23,cy+143,4);
	 //middle two join to outer front design

	pieslice(42,cy+133,65,110,5);
	line(35,cy+128,50,cy+128);
  //head

   setfillstyle(1,14);
   pieslice(20,cy+150-7,0,360,5);
   bar(18,cy+150-7,22,cy+140-7);
   circle(20,cy+138-7,2);
   //back design

     pieslice(20,cy+138-7,30,60,8);
     pieslice(20,cy+138-7,210,240,8);
	   //cross1


     pieslice(20,cy+138-7,12,150,8);
     pieslice(20,cy+138-7,300,330,8);
	   //cross2



   line(45,cy+160-7,43,cy+164-7);
   line(55,cy+160-7,57,cy+164-7);
   rectangle(40,cy+164-7,60,cy+166-7);
	 //down floorpart

     setfillstyle(1,15);
    pieslice(45,cy+149,0,90,10);     //inner front design

	 delay(0);
       //	 cleardevice();


  if(ch==27)
  {
  exit(0);
  }
 // cleardevice();
}
  getch();
}