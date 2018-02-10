#include <iostream.h>
#include <conio.h>
#include <dos.h>
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>//in stdlib there is sprintf
//using namespace std
void rules()
{
	char msg1[8],msg2[60],msg3[60],msg4[61],msg5[30],msg6[16],msg7[52],msg8[53],msg9[66];
	char msg10[50],msg11[3], msg12[4], msg13[21], msg14[61], msg15[61], msg16[50];
	sprintf(msg1,"SURVIVAL");
	settextstyle(0,HORIZ_DIR,4);
	outtextxy(200,50,msg1);
	settextstyle(0,HORIZ_DIR,0);
	sprintf(msg2,"As the name of this game suggests the main aim is to survive");
	sprintf(msg3,"In the main menu there are two difficulty levels-easy / hard");
	sprintf(msg4,"If you choose either one of them you are directed to the game");
	sprintf(msg5,"So how do we play the game?");
	sprintf(msg6,"You'll get a car");
	sprintf(msg7,"You've got to dodge the obstacles that come your way");
	sprintf(msg8,"The more obstacles you dodge the more points you earn");
	sprintf(msg9,"As you progres the game goes faster making obstacles hard to dodge");
	sprintf(msg10,"You may be thinking, 'How many lives do you get?'");
	sprintf(msg11,"ONE");
	sprintf(msg12,"Why?");
	sprintf(msg13,"Because its SURIVIAL!");
	sprintf(msg14,"The whole point of the game is to survive as long as you can");
	sprintf(msg15,"to break the high score. If you crash you're out of the game");
	sprintf(msg16,"GOOD LUCK, AND MAY THE ODDS BE EVER IN YOUR FAVOR");
	outtextxy(50,80,msg2);
	outtextxy(50,100,msg3);
	outtextxy(50,120,msg4);
	outtextxy(50,140,msg5);
	outtextxy(50,170,msg6);
	outtextxy(50,190,msg7);
	outtextxy(50,210,msg8);
	outtextxy(50,230,msg9);
	outtextxy(50,240,msg10);
	outtextxy(50,260,msg11);
	outtextxy(50,280,msg12);
	outtextxy(50,300,msg13);
	outtextxy(50,320,msg14);
	outtextxy(50,340,msg15);
	getch();
	cleardevice();
	settextstyle(0,HORIZ_DIR,4);
	outtextxy(200,50,msg1);
	settextstyle(0,HORIZ_DIR,0);
	outtextxy(80,300,msg16);
}
int main()
{
	int gd = DETECT, gm;
	initgraph(&gd,&gm,"C:\\TURBOC++\\DISK\\TURBOC3\\BGI\\DISK\\TURBOC3\\BGI");
	rules();
	getch();
	closegraph();
	return 0;
}
