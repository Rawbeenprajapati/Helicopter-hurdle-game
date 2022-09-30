#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
#include<iostream.h>
#include<math.h>
int first,second;
int downcrashed(int,int,int,int,int,int,int,int);
int upcrashed(int,int,int,int,int,int,int,int);
void main()
{
char ch;
  int cx;
  float cy=0,v=0,lift=0.3,g=0.7;//,du,dd;//(g is correct)
   int x,y,width=20,xcor,du,dd,hx1,hx2,hy1,hy2;
   float foy=0,soy=0,toy=0,ya=0,yb=0,yc=0;//second=0;
  int upperbar,downbar,check1=0,check2=0,check3=0;
  int fixedy;
  int gm,gd;
  gd=DETECT;
  initgraph(&gd,&gm,"C:\\TurboC3\\bgi");
  cx=getmaxx()/2;
  y=getmaxy()/2;
  fixedy=getmaxy()/2;
  x=cx*2;
  y=getmaxy();
  xcor=cx+300;
  first=xcor+250;
  second=xcor+450;
  upperbar=fixedy-90;
  downbar=fixedy+20;
// setfillstyle(1,4);
  setbkcolor(YELLOW);
 while(1)
{
  //starting of obstacle code

	 setfillstyle(1,2);
   //  printf("%f",downbar+ya);
    //  printf("%f",upperbar+foy);
       if(check1==0)
     {
      if(upperbar+foy>=downbar)
	{
	  bar(xcor,upperbar+foy-30,xcor+width,fixedy-200);
	 // bar(xcor,downbar,xcor+width,cy+150); //ending of first obs
	upcrashed(hx1,hx2,xcor,xcor+width,hy1,hy2,(upperbar+foy-30),fixedy-200);

	 }
	else
	{
	   bar(xcor,upperbar+foy-60,xcor+width,fixedy-200);
	    upcrashed(hx1,hx2,xcor,xcor+width,hy1,hy2,(upperbar+foy-60),fixedy-200);
	   bar(xcor,downbar,xcor+width,fixedy+150); //ending of first obs
	   downcrashed(hx1,hx2,xcor,xcor+width,hy1,hy2,downbar,fixedy+150);
	 // crashed(upperbar+foy-60,downbar,dd,du);
	 }
       }
	 else
	 {
	 if(downbar+ya>=upperbar)
	 {
	  //bar(xcor,upperbar,xcor+width,cy-200);
	  bar(xcor,downbar+ya-150,xcor+width,fixedy+150); //ending of first obs
	  downcrashed(hx1,hx2,xcor,xcor+width,hy1,hy2,(downbar+ya-150),fixedy+150);
	   //crashed(upperbar+200,downbar+ya-150,dd,du);
	 }
	  else
	  {
		   bar(xcor,upperbar,xcor+width,fixedy-200);
		   upcrashed(hx1,hx2,xcor,xcor+width,hy1,hy2,upperbar,fixedy-200);
		  bar(xcor,downbar+ya-40,xcor+width,fixedy+150);
		  downcrashed(hx1,hx2,xcor,xcor+width,hy1,hy2,(downbar+ya-40),fixedy+150);
	      // crashed(upperbar,downbar+ya-40,dd,du);
	   }
	 }
      if(check2==0)
     {
      if(upperbar+soy>=downbar)
	{
	  bar(first,upperbar+soy-30,first+width,fixedy-200);
	 // bar(xcor,downbar,xcor+width,cy+150); //ending of first obs
	 upcrashed(hx1,hx2,first,first+width,hy1,hy2,(upperbar+soy-30),fixedy-200);
	 }
	else
	{
	   bar(first,upperbar+soy-60,first+width,fixedy-200);
	   upcrashed(hx1,hx2,first,first+width,hy1,hy2,(upperbar+soy-60),fixedy-200);
	   bar(first,downbar,first+width,fixedy+150); //ending of first obs
	    downcrashed(hx1,hx2,first,first+width,hy1,hy2,downbar,fixedy+150);
	 }
       }
	 else
	 {
	 if(downbar+yb>=upperbar)
	 {
	  //bar(xcor,upperbar,xcor+width,cy-200);
	  bar(first,downbar+yb-150,first+width,fixedy+150); //ending of first
	   downcrashed(hx1,hx2,first,first+width,hy1,hy2,(downbar+yb-150),fixedy+150);
	 }
	  else
	  {
		   bar(first,upperbar,first+width,fixedy-200);
		   upcrashed(hx1,hx2,first,first+width,hy1,hy2,(upperbar),fixedy-200);
		  bar(first,downbar+yb-40,first+width,fixedy+150);
		   downcrashed(hx1,hx2,first,first+width,hy1,hy2,(downbar+yb-40),fixedy+150);
	   }
	 }
       if(check3==0)
     {
      if(upperbar+toy>=downbar)
	{
	  bar(second,upperbar+toy-30,second+width,fixedy-200);
	 // bar(xcor,downbar,xcor+width,cy+150); //ending of first obs
	 upcrashed(hx1,hx2,second,second+width,hy1,hy2,(upperbar+toy-30),fixedy-200);
	 }
	else
	{
	   bar(second,upperbar+toy-60,second+width,fixedy-200);
	   upcrashed(hx1,hx2,second,second+width,hy1,hy2,(upperbar+toy-60),fixedy-200);
	   bar(second,downbar,second+width,fixedy+150); //ending of first obs
	    downcrashed(hx1,hx2,second,second+width,hy1,hy2,downbar,fixedy+150);
	 }
       }
	 else
	 {
	 if(downbar+yc>=upperbar)
	 {
	  //bar(xcor,upperbar,xcor+width,cy-200);
	  bar(second,downbar+yc-150,second+width,fixedy+150); //ending of first obs
	   downcrashed(hx1,hx2,second,second+width,hy1,hy2,(downbar+yc-150),fixedy+150);
	 }
	  else
	  {
		   bar(second,upperbar,second+width,fixedy-200);
		   upcrashed(hx1,hx2,second,second+width,hy1,hy2,(upperbar),fixedy-200);
		  bar(second,downbar+yc-40,second+width,fixedy+150);
	       downcrashed(hx1,hx2,second,second+width,hy1,hy2,(downbar+yc-40),fixedy+150);
	   }
	 }
   xcor=xcor-10;
    first=first-10;
    second=second-10;
  // printf("%d\t",xcor);
     delay(100);
     if(xcor==-1)
     {
       xcor=cx+300;
     foy=random(100);
     ya=random(100);
     check1=random(2);
      }
      if(first==-1)
      {
	first=xcor+250;
     soy=random(100);
      yb=random(100);
      check2=random(2);
	}
	if(second==-1)
	{
	  second=xcor+450;
       toy=random(100);
	yc=random(100);
	check3=random(2);
	  }

     delay(10);

  cleardevice();
  setcolor(GREEN);
  rectangle(0,fixedy-200,x,fixedy+150); //outer play box
  setcolor(BLACK);
  setfillstyle(1,2);
  bar(0,fixedy+151,2*cx,fixedy+170);
  setfillstyle(1,3);
  bar(0,fixedy-200,2*cx,fixedy-250); //upper part
  setfillstyle(1,4);
  bar(0,fixedy+170,2*cx,fixedy+250); //down part




  //ending of obstacle code
  if(kbhit())
  {
     ch=getch();
     if(ch==72)
     {
	 v=(lift+10+5+5);
	v=-v;
	cy+=v;
	//  printf("%d",cy);
     }
    else if(ch==80)
   {
       v=0;
      cy-=v;
      g=0;
      g=g+1+(1);
      cy+=g;
      //	printf("%d",cy);
     }
   }
   else
   {
      v+=g*(5+2);
      cy+=v;
   }

  setcolor(4);
  setfillstyle(1,12);
  pieslice(40+60,cy+153,0,90,20);   //outer front design

   setfillstyle(1,2);
   line(20+60,cy+143,40+60,cy+153);
   line(20+60,cy+143,40+60,cy+133);
   floodfill(23+60,cy+143,4);
	 //middle two join to outer front design

	pieslice(42+60,cy+133,65,110,5);
	line(35+60,cy+128,50+60,cy+128);
  //head

   setfillstyle(1,14);
   pieslice(20+60,cy+150-7,0,360,5);
   bar(18+60,cy+150-7,22+60,cy+140-7);
   circle(20+60,cy+138-7,2);
   //back design

   pieslice(20+60,cy+138-7,30,60,8);
   pieslice(20+60,cy+138-7,210,240,8);
	   //cross1


  pieslice(20+60,cy+138-7,120,150,8);
  pieslice(20+60,cy+138-7,300,330,8);
	   //cross2



  line(45+60,cy+160-7,43+60,cy+164-7);
  line(55+60,cy+160-7,57+60,cy+164-7);
  rectangle(40+60,cy+164-7,60+60,cy+166-7);
	 //down floorpart

  setfillstyle(1,15);
  pieslice(45+60,cy+149,0,90,10);     //inner front design
  du=cy+130;
  dd=cy+157;
  hy2=dd;
  hy1=dd-31;
  hx1=cx-245;
  hx2=cx-197;
 setcolor(YELLOW);
  rectangle(hx1,du,hx2,dd);  //detective rectangle

 delay(20);
if(du<=38 || dd>=375)
  {
     printf("CRASHED");
   }

  if(ch==27)
  {
  exit(0);
  }
 // cleardevice();
}
  getch();
}

int downcrashed(int hx1,int hx2,int ox1,int ox2,int hy1,int hy2,int oy1,int oy2)
{
  if( ((hx1>=ox1 && hx1<=ox2) || (hx2>=ox1 && hx2<=ox2)) && ((hy1>=oy1 && hy1<=oy2) || (hy2>=oy1 && hy2<=oy2)) )
     {
       printf("CRASHED");
     }
     else
     {
      return(1);
      }
 }
int upcrashed(int hx1,int hx2,int ox1,int ox2,int hy1,int hy2,int oy1,int oy2)
{
  if( ((hx1>=ox1 && hx1<=ox2) || (hx2>=ox1 && hx2<=ox2)) && ((hy1<=oy1 && hy1>=oy2) || (hy2<=oy1 && hy2>=oy2)) )
     {
       printf("CRASHED");
     }
     else
     {
      return(1);
     }
 }
