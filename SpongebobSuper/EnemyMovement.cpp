#include "iGraphics.h"
#include<iostream>

using namespace std;

#define SCREEN_HEIGHT 1080
#define SCREEN_WIDTH 1920

char enemy[2][26] = { "character\\Spike_Left.bmp", "character\\Spike_Right.bmp" };
char platform[20] = "character\\stair.bmp";

int enemy1X = 1920 / 2 + 1920/4;
int enemy1Y = 1080 / 4;
int counter = 0;

int enemy2X = 1920 / 4 ;
int enemy2Y = 1080 / 2 ;

bool isLeft = true;

//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://

void iDraw()
{
	iClear();
	iFilledRectangle(0, 0, 1920, 1080);
	iSetColor(255, 255, 255);
	{
		if (isLeft)
			iShowBMP(enemy1X, enemy1Y, enemy[0]);
		else
			iShowBMP(enemy1X, enemy1Y, enemy[1]);
	}
	{
		if (isLeft)
			iShowBMP(enemy2X, enemy2Y, enemy[0]);
		else
			iShowBMP(enemy2X, enemy2Y, enemy[1]);
	}

}





/*function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/


void iMouseMove(int mx, int my)
{
	
}
//*******************************************************************ipassiveMouse***********************************************************************//
void iPassiveMouseMove(int mx, int my)
{
	
}

void iMouse(int button, int state, int mx, int my)
{
	
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{

		
	}
	
	
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		
	}
}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/


void iKeyboard(unsigned char key)
{
	if (key == '\r')
	{
		
	}
	
	
}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

	
	if (key == GLUT_KEY_RIGHT)
	{
				
	}
	if (key == GLUT_KEY_LEFT)
	{
		
	}
	
	if (key == GLUT_KEY_HOME)
	{
		
	}
	
}

void move()
{
	{
		if (isLeft)
			enemy1X--;
		else
			enemy1X++;
	}
	{
		if (isLeft){
			enemy2X--;
			enemy2Y--;
		}
			
		else{
			enemy2X++;
			enemy2Y++;
		}		
	}
}
void changeDirection()
{
	if (isLeft)
		isLeft = false;
	else
		isLeft = true;
}

int main()
{
	iSetTimer(5, move);
	iSetTimer(4000, changeDirection);
	///srand((unsigned)time(NULL));
	iInitialize(SCREEN_WIDTH, SCREEN_HEIGHT, "Spongebob Super");
	///updated see the documentations
	iStart();
	return 0;
}