#include "iGraphics.h"
#include <iostream>
using namespace std;




struct Platform
{
	int platformX;
	int platformY;
	int platformDimensionX;
	int platformDimensionY;
	char *renderPlatform;
	bool isLeft;
	Platform()
	{
		
	}
	Platform(int _platformX, int _platformY, char _renderPlatform[21], bool _isLeft, int _platformDimensionX, int _platformDimensionY){
		platformX = _platformX;
		platformY = _platformY;
		platformDimensionX = _platformDimensionX;
		platformDimensionY = _platformDimensionY;
		renderPlatform = _renderPlatform;
		isLeft = _isLeft;
	}

} platform1(500, 500, "Character\\stair.png", true, 128, 29), platform2(700, 700, "Character\\stair.bmp", false, 256, 58);

//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://

void iDraw()
{
	iClear();
	iShowImage(platform1.platformX, platform1.platformY, platform1.platformDimensionX, platform1.platformDimensionY, iLoadImage(platform1.renderPlatform));
	//iShowBMP(platform1.platformX, platform1.platformY, platform1.renderPlatform);
	//iShowBMP(platform2.platformX, platform2.platformY, platform2.renderPlatform);
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



void movePlatform()
{
	{
		if (platform1.isLeft)
			platform1.platformX--;
		else
			platform1.platformX++;		
	}
	{
		if (platform2.isLeft)
			platform2.platformX--;
		else
			platform2.platformX++;
	}
}

void changePlatformDirection()
{
	{
		if (platform1.platformX <= 0)
			platform1.isLeft = false;
		else if (platform1.platformX + platform1.platformDimensionX >= 1280)
			platform1.isLeft = true;
	}
	{
		if (platform2.platformX <= 0)
			platform2.isLeft = false;
		else if (platform2.platformX + platform2.platformDimensionX >= 1280)
			platform2.isLeft = true;
	}
}

void check()
{
	
}

int main()
{
	///srand((unsigned)time(NULL));
	iInitialize(1280, 900, "Project Title");
	iSetTimer(5, movePlatform);
	iSetTimer(1, changePlatformDirection);
	///updated see the documentations
	iStart();
	return 0;
}