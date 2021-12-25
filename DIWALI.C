
#include<stdio.h>
#include<conio.h>
#include<graphics.h>

#include<dos.h>


void main()
{
int gd,gm;
int x,y;
int i,j,kk;
detectgraph(&gd,&gm);


initgraph(&gd,&gm,"c:\\tc\\bgi");


setcolor(WHITE);
line(0,400,640,400);
rectangle(300,330,340,400);
rectangle(310,320,330,330);

setcolor(4);
line(319,280,319,398);
line(320,280,320,398);
rectangle(320,280,330,300);
   setcolor(RED);
 settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
outtextxy(160,240,"PRESS ENTER KEY TO LAUNCH THE ROCKET");
setcolor(YELLOW);
  settextstyle(TRIPLEX_SCR_FONT,HORIZ_DIR,5);
outtextxy(50,40,"WELCOME IN THE ");
settextstyle(TRIPLEX_SCR_FONT,HORIZ_DIR,5);
outtextxy(100,80," PROGRAMMING WORLD");
setcolor(WHITE);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
outtextxy(20,20,"PROGRAMMED BY SHUBHAM BANDGAR");


getch();
for(j=400;j<640;j++);
{
cleardevice();
setcolor(WHITE);



line(0,j,640,j);

rectangle(300,j-70,340,j);
rectangle(310,j-80,330,j-70);
setcolor(RED);

line(319,280,319,400);
line(320,280,320,400);
rectangle(320,280,330,300);

 setcolor(YELLOW);
 circle(325,300,2);

 delay(5);
 }

  for(i=400;i>340;i--);
  {
  cleardevice();
  setcolor(RED);
  line(319,i,319,i-120);
  line(320,i,320,i-120);

  rectangle(320,i-120,330,i-100);
  setcolor(YELLOW);
  circle(325,i-100,2);
  delay(25);
  }

  cleardevice();
  kk=0;
  for(j=100;j<350;j++)
  {
  if(j%20==0)
  {
  setcolor(kk);
  delay(50);
  }
  ellipse(320,30,0,360,j+100,j+0);

  }
  for(j=100;j<350;j++)
  {
  if(j%20==0)
  {
  setcolor(BLACK);
  delay(2);
  }
  ellipse(320,30,0,360,j+100,j+0);

  }
  cleardevice();
  i=0;
  while(!kbhit())
  {
  setcolor(i++);
  settextstyle(SMALL_FONT,HORIZ_DIR,5);
 outtextxy(500,400,"SHUBHAM'S CODING");
   settextstyle(BOLD_FONT,HORIZ_DIR,4);
  outtextxy(70,70," WISHING U A HAPPY ");
  outtextxy(200,130,"DIWALI");

  delay(0);

 settextstyle(SANS_SERIF_FONT,HORIZ_DIR,3);
 outtextxy(20,20,"WE R CELEBRATING THE INDIAS NO 1 FESTIVAL");
 settextstyle(SCRIPT_FONT,HORIZ_DIR,1);
 outtextxy(30,50,"LET ME MAKE UR DIWALI MORE COLORFUL WITH THE LIGHTS OF WISHES OF MY HEART");
   settextstyle(TRIPLEX_SCR_FONT,HORIZ_DIR,4);
 outtextxy(30,320,"MAKE THIS DIWALI POLLUTION FREE");

   settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
 outtextxy(60,210,"LET'S BUY HAPPINESS FOR");
    outtextxy(90,250,"THOUSANDS US LET'S ");
    outtextxy(120,290,"SPREAD A SMILE");
    settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
    outtextxy(40,360,"FOLLOW THE LIGHTS OF THE DIYAS TO FIND UR ROAD TOWARDS GROWTH AND SUCCESS");
  }
  getch();
  cleardevice();
     setcolor(RED);
  settextstyle(SANS_SERIF_FONT,HORIZ_DIR,3);
 outtextxy(20,20,"LETS CELEBRATE DIWALI WITH JOY");
 delay(100);
 setcolor(WHITE);
 settextstyle(SMALL_FONT,HORIZ_DIR,8);
 outtextxy(40,50,"LETS ENJOY THIS DIWALI BY  EATING SWEETS");
 delay(100);
 setcolor(GREEN);
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,2);
 outtextxy(45,75,"MAY THE BEAUTY AND FESTIVITY OF DIWALI FILL UR HOME WITH HAPPINES AND JOY");
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,2);
 outtextxy(50,95,"WITH HAPPINESS AND JOY !!!");
 delay(200);
 setcolor(CYAN);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
 outtextxy(40,125,"WISHING U WARMTH,LOVE AND LIGHT");
 outtextxy(45,150,"LIGHT THIS DIWALI & ALL YEAR LONG");
 outtextxy(100,180,"YEAR LOVE");
 delay(200);
 setcolor(WHITE);
 settextstyle(SCRIPT_FONT,HORIZ_DIR,2);
 outtextxy(40,210,"MAY MILLIONS OF LAMPS ILLUMINATE UR LIFE");
 delay(300);
 setcolor(BROWN);
 settextstyle(BOLD_FONT,HORIZ_DIR,1);
 outtextxy(30,240,"CELEBRATE THE FESTIVAL OF LIGHTS WITH LOVE,RESPECT AND HOMOUR");
 outtextxy(35,270 ,"WITH LOVE,RESPECT AND HONOUR !!!");
 delay(300);
 setcolor(LIGHTRED);
 settextstyle(SCRIPT_FONT,HORIZ_DIR,4);
 outtextxy(35,310,"WISHING U HEALTH WEALTH & ");
  outtextxy(36,342,"TONES OF STARDOM THIS DIWALI");
  setcolor(LIGHTMAGENTA);
  settextstyle(BOLD_FONT,HORIZ_DIR,5);
  outtextxy(200,380,"THANK U !!!");
     delay(500);

 getch();
}




















































