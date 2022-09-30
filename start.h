#include<stdio.h>
#include<process.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
int load()
{
// char ch;
  int x,y,cx,cy,i=0,choice;
  int gm,gd;
  gd=DETECT;
  initgraph(&gd,&gm,"C://TurboC3//bgi");
  x=getmaxx();
  y=getmaxy();
  cx=x/2;
  cy=y/2;
  int start,end;
  start=cx-150;
  end=cx+150;
  randomize();
  choice=random(6);
  printf("%d",choice);
  if(choice==0)
  {
   choice=choice+1;
  }
  switch(choice)
  {
  case 1:
  while(start!=end)
  {

   setcolor(GREEN);
  outtextxy(cx-149,cy+170,"LOADING...");
  outtextxy(cx-175,cy+195,"HINT:Find rhythm for higher and lower bars.");
  setcolor(GREEN);
  rectangle(cx-150,cy+180,cx+150,cy+190);
  setcolor(GREEN);
  setfillstyle(1,10);
  bar(start,cy+180,start,cy+190);
  start=start+2;
  i=i+2;
  delay(20);
  if(start==end)
  {
   clrscr();
   exit(0);
   }
  }
   break;

  case 2:
  while(start!=end)
  {

   setcolor(GREEN);
  outtextxy(cx-149,cy+170,"LOADING...");
  outtextxy(cx-190,cy+195,"HINT:The up arrow key determines how high the helicopter goes");// goes and if no key is pressed the helicopter looses its height");
  outtextxy(cx-180,cy+215,"and if no key is pressed the helicopter looses its height");
  setcolor(GREEN);
  rectangle(cx-150,cy+180,cx+150,cy+190);
  setcolor(GREEN);
  setfillstyle(1,10);
  bar(start,cy+180,start,cy+190);
  start=start+2;
  i=i+2;
  delay(20);
  if(start==end)
  {
   clrscr();
   cleardevice();
   exit(0);
   }
  }
   break;

   case 3:
  while(start!=end)
  {
   setcolor(GREEN);
  outtextxy(cx-149,cy+170,"LOADING...");
  outtextxy(cx-160,cy+195,"HINT:Press down arrow key to start game.");
  setcolor(GREEN);
  rectangle(cx-150,cy+180,cx+150,cy+190);
  setcolor(GREEN);
  setfillstyle(1,10);
  bar(start,cy+180,start,cy+190);
  start=start+2;
  i=i+2;
  delay(20);
  if(start==end)
  {
   clrscr();
   exit(0);
   }
  }
   break;


  case 4:
  while(start!=end)
  {

   setcolor(GREEN);
  outtextxy(cx-149,cy+170,"LOADING...");
  outtextxy(cx-190,cy+195,"HINT:Stay in the middle of screen until the first set");// of bars appears.");
  outtextxy(cx-153,cy+215,"of bars appears.");
  setcolor(GREEN);
  rectangle(cx-150,cy+180,cx+150,cy+190);
  setcolor(GREEN);
  setfillstyle(1,10);
  bar(start,cy+180,start,cy+190);
  start=start+2;
  i=i+2;
  delay(20);
  if(start==end)
  {
   cleardevice();
   clrscr();
   exit(0);
   }
  }
   break;


  case 5:

  while(start!=end)
  {

   setcolor(GREEN);
  outtextxy(cx-149,cy+170,"LOADING...");
  outtextxy(cx-120,cy+195,"HINT:Try not to go high.");
  setcolor(GREEN);
  rectangle(cx-150,cy+180,cx+150,cy+190);
  setcolor(GREEN);
  setfillstyle(1,10);
  bar(start,cy+180,start,cy+190);
  start=start+2;
  i=i+2;
  delay(20);
  if(start==end)
  {
   clrscr();
   cleardevice();
   exit(0);
   }
  }
   break;

  case 6:

  while(start!=end)
  {

   setcolor(GREEN);
  outtextxy(cx-149,cy+170,"LOADING...");
  outtextxy(cx-180,cy+195,"HINT:Stay in the middle of the bars and if a bar or ground is hit,the game ends.");
  setcolor(GREEN);
  rectangle(cx-150,cy+180,cx+150,cy+190);
  setcolor(GREEN);
  setfillstyle(1,10);
  bar(start,cy+180,start,cy+190);
  start=start+2;
  i=i+2;
  delay(20);
  if(start==end)
  {
   clrscr();
   closegraph();
   exit(0);
   }
  }
   break;
  }
  //getch();
 // closegraph();
  }