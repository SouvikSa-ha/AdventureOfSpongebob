#include "iGraphics.h"
#include <iostream>
#include <time.h>
using namespace std;

#define SCREEN_HEIGHT 1080
#define SCREEN_WIDTH 1920

int characterPositionX = 200;
int characterPositionY = 100;

char runAnimation[8][20] = { "Character\\run1.bmp", "Character\\run2.bmp", "Character\\run3.bmp", "Character\\run4.bmp", "Character\\run5.bmp", "Character\\run6.bmp", "Character\\run7.bmp", "Character\\run8.bmp", };
int runIndex = 0;
int runcounter = 3;

char standPosition[21] = { "Character\\stand.bmp" };
int standCounter = 0;

bool stand = true;

bool jumping = false;
bool jumpUp = false;

int jumpChangeY = 0;
int jumpChangeRate = 55;
int jumpAcceleration = 5;

//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://

void iDraw()
{
	iClear();
	iSetColor(255, 255, 255);
	iFilledRectangle(0, 0, 1920, 1080);
	if (jumping)
	{
		if (jumpUp)
			iShowBMP2(characterPositionX, characterPositionY + jumpChangeY, standPosition, 200);
		else
			iShowBMP2(characterPositionX, characterPositionY + jumpChangeY, standPosition, 200);
	}
	else
	{
		if (!stand)
		{
			iShowBMP2(characterPositionX, characterPositionY, runAnimation[runIndex], 0);
			standCounter++;
			if (standCounter >= 100)
			{
				standCounter = 0;
				stand = true;
				runIndex = 0;
			}
		}
		else{
			iShowBMP2(characterPositionX, characterPositionY, standPosition, 200);
		}
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
		runcounter++;
		if (runcounter >= 3){
		runcounter = 0;
			stand = false;
			characterPositionX += 30;
			runIndex++;
			if (runIndex >= 8)
				runIndex = 0;
		}
	}
	if (key == GLUT_KEY_LEFT)
	{
		runcounter++;
		if (runcounter >= 3){
			runcounter = 0;
			stand = false;
			characterPositionX -= 30;
			runIndex++;
			if (runIndex >= 8)
				runIndex = 0;
		}
	}
	if (key == GLUT_KEY_UP)
	{
		if (!jumping)
		{
			jumping = true;
			jumpUp = true;
		}	
	}
	
	if (key == GLUT_KEY_HOME)
	{
		
	}
	
}
void jumpControl()
{
	if (jumping)
	{
		if (jumpUp)
		{
			jumpChangeRate -= jumpAcceleration;
			jumpChangeY += jumpChangeRate;
			if (jumpChangeRate == 0)
			{
				jumpUp = false;
			}
		}
		else
		{
			jumpChangeY -= jumpChangeRate;
			jumpChangeRate += jumpAcceleration;
			if (jumpChangeRate == 55)
			{
				jumping = false;
			}
		}
	}
}

int main()
{
	///srand((unsigned)time(NULL));
	iSetTimer(75, jumpControl);
	iInitialize(SCREEN_WIDTH, SCREEN_HEIGHT, "Spongebob Super");
	///updated see the documentations
	//iSetTimer(100, update);
	//iSetTimer(100, update2);
	
	iStart();
	return 0;
}