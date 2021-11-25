#include<graphics.h>
#include<stdio.h>

/*
	Code Designed by Harsh Vishwakarma
	Topic: Design smiley face with changing expressions in C
*/

void face()
{
	int x=getmaxx();//get maximum value for x co-ordinate
	int y=getmaxy();//get maximum value for y co-ordinate
		
	setfillstyle(1, YELLOW);
		fillellipse(x/2,y/2,90,90);//fill the ellipse with color(Face)
	
	setfillstyle(1, BLACK);
		fillellipse(x/2-30,y/2-25,10,12);//fill the ellipse with color(eye)
		fillellipse(x/2+30,y/2-25,10,12);//fill the ellipse with color(eye)
	
	setcolor(BLACK);
	line(x/2,y/2-10,x/2,y/2+15);//draw a line(nose)
}

int main()
{

	
	int gd=DETECT,gm;
	initgraph(&gd,&gm, "C:\\TC\\BGI");
	
	int x=getmaxx();//get maximum value for x co-ordinate
	int y=getmaxy();//get maximum value for y co-ordinate
	
	
	for(int i=0;i<=5;i++)
	{
	
	face();
	arc(x/2,y/2,220,320,50);//Happy Emotion
	delay(5000);
	cleardevice();
	
	face();
	arc(x/2,y/2+75,45,135,45);//Sad Emotion
	delay(5000);
	cleardevice();
	
	face();
	line(x/2-30,y/2+40,x/2+30,y/2+40);//Confused Emotion
	delay(5000);
	cleardevice();
	
	face();
	setfillstyle(1, WHITE);
	pieslice(x/2,y/2+30,180,0,30);//Laughing Emotion
	delay(5000);
	cleardevice();
		
	face();
	setfillstyle(1, WHITE);
	pieslice(x/2,y/2+50,0,180,25);//Angry Emotion
	delay(5000);
	cleardevice();
	}
			
	
	getch();
	closegraph();
	return 0;
}
