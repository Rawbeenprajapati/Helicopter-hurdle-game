#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
#include<iostream.h>
#include<math.h>
#include<fstream.h>
int first,second,flag=0;
int downcrashed(int,int,int,int,int,int,int,int);
int upcrashed(int,int,int,int,int,int,int,int);
int gotbonus(int,int,int,int,int,int,int,int);
int score[5]={0,0,0,0};
int clock[6]={0,0,0,0,0};
int count=0,i,j,p,m,q;
int a[4];
int temp;
int bout=1,xbonus,bonus,bonusplus=0;

void main()
{
  //clrscr();
  char ch;
  int cx;
  float cy=0,v=0,lift=7,g=20;
   int x,y,width=20,xcor,du,dd,hx1,hx2,hy1,hy2,bl,br;
   float foy=0,soy=0,toy=0,ya=0,yb=0,yc=0;
  int upperbar,downbar,check1=0,check2=0,check3=0,check4=0;
  int fixedy;
  ifstream fin;
  ofstream fout;
  char ch3[6],ch1[5],ch2[6];
  int gm,gd;
  gd=DETECT;
  initgraph(&gd,&gm,"C:\\TurboC3\\bgi");
  cx=getmaxx()/2;
  //y=getmaxy()/2;
  fixedy=getmaxy()/2;
  x=cx*2;
  //y=getmaxy();
  xcor=cx+300;

  first=xcor+250;
  xbonus=(xcor+first)/2;
  second=xcor+450;
  upperbar=fixedy-90;
  downbar=fixedy+20;
  int style=1;
  int color=14;

  //STORING HIGHEST SCORE

  //>>>>>>>>>>>>>>file open
   fin.open("highscore.txt",ios::in);
   for(i=0;i<3;i++)
   {
     fin>>a[i];
     setfillstyle(1,BLACK);
     cout<<a[i];

   }
   fin.close();
    a[3]=q;
   //>>>>>>>>>>>>>read file closed

  setbkcolor(YELLOW);
 while(flag!=1)
{


	 //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> starting of clock and time
	    if(clock[4]>9)
       {
	     clock[4]=0;
	     clock[3]++;
	  if(clock[3]>9)
	  {
	       clock[3]=0;
	       clock[2]++;

	      if(clock[2]>9)
	      {
		 clock[2]=0;
		 clock[1]=clock[1]++;
		 if(clock[1]>9)
		 {
			 clock[1]=0;
			 clock[0]++;
		 }
	      }
	  }
       }
       if(count%5==0)
       {

       if(score[3]>9)
       {
	     score[3]=0;
	     score[2]++;
	  if(score[2]>9)
	  {
	       score[2]=0;
	       score[1]++;
	      if(score[1]>9)
	      {
		 score[1]=0;
		 score[0]=score[0]++;
	      }
	  }
       }

      }
    ////////////////////////CONVERSION INTO INT
     p=clock[4]+clock[3]*10+clock[2]*100+clock[1]*1000+clock[0]*10000;
     q=score[3]+score[2]*10+score[1]*100+score[0]*1000+bonusplus;
    //////////////////////////////
    //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> score bar
      setcolor(GREEN);
    setfillstyle(1,GREEN);
    bar(0,getmaxy()/2-200,getmaxx(),getmaxy()/2-220);
    //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
     itoa(p,ch3,10);
     itoa(q,ch1,10);
     itoa(a[0],ch2,10);
  //printf("%d\n",p);
    m=getmaxy()/2-210;
    setcolor(YELLOW);
    outtextxy(0,m,"Time:");
    outtextxy(getmaxx()/2,m,"Score:");
    outtextxy(getmaxx()/2+200,m,"Best Score:");

    setcolor(WHITE);
    outtextxy(40,m,ch3);
    outtextxy(getmaxx()/2+48,m,ch1);
    outtextxy(getmaxx()/2+200+95,m,ch2);
    delay(30);
    setcolor(YELLOW);
 // cleardevice();
    outtextxy(40,m,ch3);
    outtextxy(getmaxx()/2+48,m,ch1);
    outtextxy(getmaxx()/2+200+95,m,ch2);
    clock[4]++;

    count++;

    bonus++;

    if(count%5==0)
  {
    score[3]++;
   }


 //  if(putbonus==1)
  // {






 //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
	  //starting of obstacle code

  setfillstyle(1,2);
 if(check1==0)
     {
      if(upperbar+foy>=downbar)
	{
	 setfillstyle(1,2);
       bar(xcor,upperbar+foy-30,xcor+width,fixedy-200);
	 // bar(xcor,downbar,xcor+width,cy+150); //ending of first obs
 upcrashed(hx1,hx2,xcor,xcor+width,hy1,hy2,(upperbar+foy-30),fixedy-200);
	    setfillstyle(style,color);
     bar(xcor+20,upperbar+foy-30,xcor+width+20,fixedy-200);
	 }
	else
	{
	  setfillstyle(1,2);
       bar(xcor,upperbar+foy-60,xcor+width,fixedy-200);
     upcrashed(hx1,hx2,xcor,xcor+width,hy1,hy2,(upperbar+foy-60),fixedy-200);
	   bar(xcor,downbar,xcor+width,fixedy+150); //ending of first obs
	   downcrashed(hx1,hx2,xcor,xcor+width,hy1,hy2,downbar,fixedy+150);
	 // crashed(upperbar+foy-60,downbar,dd,du);
	setfillstyle(style,color);
	 bar(xcor+20,upperbar+foy-60,xcor+width+20,fixedy-200);
	  bar(xcor+20,downbar,xcor+width+20,fixedy+150);
	 }
       }
	 else
	 {
	 if(downbar+ya>=upperbar)
	 {
	    setfillstyle(1,2);
	  //bar(xcor,upperbar,xcor+width,cy-200);
	  bar(xcor,downbar+ya-150,xcor+width,fixedy+150); //ending of first obs
   downcrashed(hx1,hx2,xcor,xcor+width,hy1,hy2,(downbar+ya-150),fixedy+150);
	   //crashed(upperbar+200,downbar+ya-150,dd,du);
	    setfillstyle(style,color);
	   bar(xcor+20,downbar+ya-150,xcor+width+20,fixedy+150);
	 }
	  else
	  {
		 setfillstyle(1,2);
		bar(xcor,upperbar,xcor+width,fixedy-200);
	 upcrashed(hx1,hx2,xcor,xcor+width,hy1,hy2,upperbar,fixedy-200);
		  bar(xcor,downbar+ya-40,xcor+width,fixedy+150);
     downcrashed(hx1,hx2,xcor,xcor+width,hy1,hy2,(downbar+ya-40),fixedy+150);
	      // crashed(upperbar,downbar+ya-40,dd,du);
	      setfillstyle(style,color);
	       bar(xcor+20,upperbar,xcor+width+20,fixedy-200);
		// bar(xcor+15,downbar+ya-40,xcor+width-10,fixedy+150);
	   }
	 }
      if(check2==0)
     {
      if(upperbar+soy>=downbar)
	{
	  setfillstyle(1,2);
	  bar(first,upperbar+soy-30,first+width,fixedy-200);
	 // bar(xcor,downbar,xcor+width,cy+150); //ending of first obs
	 upcrashed(hx1,hx2,first,first+width,hy1,hy2,(upperbar+soy-30),fixedy-200);
	 setfillstyle(style,color);
	  bar(first+20,upperbar+soy-30,first+width+20,fixedy-200);
	 }
	else
	{
	 setfillstyle(1,2);
	   bar(first,upperbar+soy-60,first+width,fixedy-200);
	   upcrashed(hx1,hx2,first,first+width,hy1,hy2,(upperbar+soy-60),fixedy-200);
	   bar(first,downbar,first+width,fixedy+150); //ending of first obs
	    downcrashed(hx1,hx2,first,first+width,hy1,hy2,downbar,fixedy+150);
	   setfillstyle(style,color);
	    bar(first+20,upperbar+soy-60,first+width+20,fixedy-200);
	     bar(first+20,downbar,first+width+20,fixedy+150);
	 }
       }
	 else
	 {
	 if(downbar+yb>=upperbar)
	 {
	  setfillstyle(1,2);
	  //bar(xcor,upperbar,xcor+width,cy-200);
	  bar(first,downbar+yb-150,first+width,fixedy+150); //ending of first
	   downcrashed(hx1,hx2,first,first+width,hy1,hy2,(downbar+yb-150),fixedy+150);
	   setfillstyle(style,color);
	   bar(first+20,downbar+yb-150,first+width+20,fixedy+150);
	 }
	  else
	  {

		 setfillstyle(1,2);
		   bar(first,upperbar,first+width,fixedy-200);
		   upcrashed(hx1,hx2,first,first+width,hy1,hy2,(upperbar),fixedy-200);
		  bar(first,downbar+yb-40,first+width,fixedy+150);
		   downcrashed(hx1,hx2,first,first+width,hy1,hy2,(downbar+yb-40),fixedy+150);
		     setfillstyle(style,color);
		   bar(first+20,upperbar,first+width+20,fixedy-200);
		    bar(first+20,downbar+yb-40,first+width+20,fixedy+150);

	   }
	 }
       if(check3==0)
     {
      if(upperbar+toy>=downbar)
	{
	   setfillstyle(1,2);
	  bar(second,upperbar+toy-30,second+width,fixedy-200);
	 // bar(xcor,downbar,xcor+width,cy+150); //ending of first obs
	 upcrashed(hx1,hx2,second,second+width,hy1,hy2,(upperbar+toy-30),fixedy-200);
	  setfillstyle(style,color);
	  bar(second+20,upperbar+toy-30,second+width+20,fixedy-200);
	 }
	else
	{
	    setfillstyle(1,2);
	   bar(second,upperbar+toy-60,second+width,fixedy-200);
	   upcrashed(hx1,hx2,second,second+width,hy1,hy2,(upperbar+toy-60),fixedy-200);
	   bar(second,downbar,second+width,fixedy+150); //ending of first obs
	    downcrashed(hx1,hx2,second,second+width,hy1,hy2,downbar,fixedy+150);
	    setfillstyle(style,color);
	   bar(second+20,upperbar+toy-60,second+width+20,fixedy-200);
	    bar(second+20,downbar,second+width+20,fixedy+150);
	 }
       }
	 else
	 {
	 if(downbar+yc>=upperbar)
	 {
	  //bar(xcor,upperbar,xcor+width,cy-200);

	   setfillstyle(1,2);
	  bar(second,downbar+yc-150,second+width,fixedy+150); //ending of first obs
	   downcrashed(hx1,hx2,second,second+width,hy1,hy2,(downbar+yc-150),fixedy+150);
	 setfillstyle(style,color);
	  bar(second+20,downbar+yc-150,second+width+20,fixedy+150);
	 }
	  else
	  {
	   setfillstyle(1,2);
	 bar(second,upperbar,second+width,fixedy-200);
	 upcrashed(hx1,hx2,second,second+width,hy1,hy2,(upperbar),fixedy-200);
	 bar(second,downbar+yc-40,second+width,fixedy+150);
	 downcrashed(hx1,hx2,second,second+width,hy1,hy2,(downbar+yc-40),fixedy+150);
	 setfillstyle(style,color);
	 bar(second+20,upperbar,second+width+20,fixedy-200);
	 bar(second+20,downbar+yc-40,second+width+20,fixedy+150);
	   }
	 }

    if(check4==0)
    {

   //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>bonus
      if(bout==1)
    {
     setcolor(BLACK);
     setfillstyle(1,9);
     bar(xbonus-5,fixedy-5,xbonus+5,fixedy+5);
     bout=gotbonus(hx1,hx2,xbonus-5,xbonus+5,hy1,hy2,fixedy-5,fixedy+5);
    // printf("1");


      //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>overlapping bonus
     setcolor(BLACK);
     setfillstyle(style,color);
     bar(xbonus+5,fixedy-5,xbonus+15,fixedy+5);

     }
     else
     {
	xbonus=xbonus+500;
	bout=1;
	bonusplus+=20;
    }
   }

    xcor=xcor-10;
    first=first-10;
    second=second-10;
    xbonus=xbonus-10;
  // printf("%d\t",xcor);
     delay(0);
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
    if((xbonus+5)==-1)
	{
	  xbonus=cx+350;
	  check4=0;

	  }
     delay(80);

//cleardevice();
  setcolor(BLACK);
  rectangle(0,fixedy-200,x,fixedy+150); //outer play box
  setcolor(YELLOW);
  setfillstyle(1,2);
  bar(0,fixedy+150,2*cx,fixedy+170);   //near bar
  setcolor(YELLOW);
     setfillstyle(1,5);
  bar(0,fixedy-220,2*cx,fixedy-250); //upper part
  setfillstyle(1,5);
  bar(0,fixedy-220,2*cx,fixedy-250); //upper part

  setfillstyle(1,5);
  bar(0,fixedy+170,2*cx,fixedy+250); //down part
    setfillstyle(1,5);
  bar(0,fixedy+170,2*cx,fixedy+250); //down part
  /////////////////////////////////////////////////
  setcolor(BLACK);
  setfillstyle(1,2);
  bar(0,fixedy-200,x,fixedy-220);
  /////////////////////////////////////////////////overlapping of helicopter

       setfillstyle(1,14);
      pieslice(40+60,cy+153,0,90,20);   //outer front design

  setfillstyle(1,14);
   line(20+60,cy+143,40+60,cy+153);
   line(20+60,cy+143,40+60,cy+133);
   floodfill(23+60,cy+143,14);
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

  //setfillstyle(1,15);
  pieslice(45+60,cy+149,0,90,10);     //inner front design
  //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

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
       v+=g+2;
     cy+=v;
     // g=0;
     // g=g+1+(3);
     // cy+=g+2;
      //	printf("%d",cy);
     }
   }

   else
   {


      v+=g+2;
     cy+=v;
      }



   //..............................   */

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
  setcolor(BLACK);
  rectangle(hx1,du,hx2,dd);  //detective rectangle

 delay(40);
// cleardevice();
 setcolor(14);
 setfillstyle(1,14);


if(du<=38 || dd>=375)
  {
   flag=1;

   //  printf("CRASHED");
   }

  if(ch==27)
  {
  exit(0);
  }

 // cleardevice();
      setfillstyle(style,color);
     bar(0,fixedy-200,28,fixedy+150);


} //while loop close
 //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>comparing and storing in file




    a[3]=q;
      for(i=0;i<4;i++)
   {
    for(j=i+1;j<4;j++)
    {
       if(a[j]>a[i])
       {
	 temp=a[i];
	 a[i]=a[j];
	 a[j]=temp;
       }
    }
   }


  // a[0]=q;
  fout.open("highscore.txt",ios::out);

   for(i=0;i<3;i++)
   {

      fout<<a[i]<<endl;
   }
   fout.close();
  //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

 getch();
}

int downcrashed(int hx1,int hx2,int ox1,int ox2,int hy1,int hy2,int oy1,int oy2)
{
  if( ((hx1>=ox1 && hx1<=ox2) || (hx2>=ox1 && hx2<=ox2)) && ((hy1>=oy1 && hy1<=oy2) || (hy2>=oy1 && hy2<=oy2)) )
     {
       flag=1;
       setfillstyle(1,4);
       bar(ox1,oy1,ox2,oy2);

      // printf("CRASHED");
      getch();
     // getch();
     }
     else
     {
      // printf("CRASHED")//
      // getch();
      return(1);
      }
 }
int upcrashed(int hx1,int hx2,int ox1,int ox2,int hy1,int hy2,int oy1,int oy2)
{
  if( ((hx1>=ox1 && hx1<=ox2) || (hx2>=ox1 && hx2<=ox2)) && ((hy1<=oy1 && hy1>=oy2) || (hy2<=oy1 && hy2>=oy2)) )
     {
      flag=1;
      setfillstyle(1,4);
      bar(ox1,oy1,ox2,oy2);
      getch();
     // getch();
      // printf("CRASHED");
     }
     else
     {
      return(1);
     }
 }
 int gotbonus(int hx1,int hx2,int bl,int br,int hy1,int hy2,int by1,int by2)
{
  if( ((hx1>=bl && hx1<=br) || (hx2>=bl && hx2<=br)) && ((hy1<=by1 && hy1>=by2) || (hy2<=by1 && by2>=by2)) )
     {
      setcolor(BLACK);
       setfillstyle(1,14);
       bar(bl,by1,br,by2);
       return(2);
	}
     else
     {
      return(1);
     }
 }