#include<stdio.h>
#include<process.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
int reset();
int first,second;
void main()
{
  char ch;
  int x,y,cx,cy,width=15,xcor,foy=0,soy=5,toy=10;//second=0;
  int gm,gd;
  gd=DETECT;
  initgraph(&gd,&gm,"C://TurboC3//bgi");
  x=getmaxx();
  y=getmaxy();
  cx=x/2;
  cy=y/2;
  xcor=cx+300;
  first=xcor+200;
  second=xcor+400;
  while(!kbhit())
  {
  //  xcor=update(cx);
      setcolor(BLUE);
      setfillstyle(6,2);

     bar(xcor,cy-100+foy,xcor+width,cy-200);
     bar(xcor,cy+50,xcor+width,cy+150); //ending of first obs

    bar(first,cy-100+soy,first+width,cy-200);
   bar(first,cy+50,first+width,cy+150); //ending of second obs

    bar(second,cy-100+toy,second+width,cy-200);
   bar(second,cy+50,second+width,cy+150); //ending of third obs
    xcor=xcor-10;
    first=first-10;
    second=second-10;
  // printf("%d\t",xcor);
     delay(100);
     if(xcor==-1)
     {
       xcor=cx+300;
       foy=random(100);
      }
      if(first==-1)
      {
	first=xcor+200;
	soy=random(100);
	}
	if(second==-1)
	{
	  second=xcor+400;
	  toy=random(100);
	  }
     delay(100);
     cleardevice();
     rectangle(0,cy-200,x,cy+150); //outer box
     }
    getch();
    closegraph();
  }