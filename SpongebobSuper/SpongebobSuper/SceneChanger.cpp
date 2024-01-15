#include "iGraphics.h"
#include <iostream>

using namespace std;

#define SCREEN_HEIGHT 1080
#define SCREEN_WIDTH 1920

int gameInnitializedCount = 0;
bool gameInnitialized = true;

char* spongebob = "Character\\Spongebob.bmp";

int x = 0;
int y = 0;

int charX = 100;
int charY = 500;

int tempPosX;
int tempPosY;

int charInnitialX = 100;
int charInnitialY = 500;

int sceneNumber = 0;
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://

void scene0();
void scene1();

void iDraw()
{
	if (gameInnitialized){
		iShowBMP(0, 0, "Character//scene1.bmp");
		gameInnitializedCount++;
		if (gameInnitializedCount == 300)
			gameInnitialized = false;
	}
	else{
		iClear();
		if (sceneNumber == 0){
			scene0();
		}
		else if (sceneNumber == 1){
			scene1();
		}
	}
	
}


void scene0(){
	iFilledRectangle(0, 0, 1920, 1080);
	iSetColor(255, 255, 255);
	iShowBMP(charX, charY, spongebob);
	tempPosX = charX - 30;
	tempPosY = charY - 30;
	if (charX + 50 > iScreenWidth){
		charX = charInnitialX;
		charY = charInnitialY;
		sceneNumber++;
	}
		
	//iShowBMP(x + 500, y + 500, "Character\\PlayButton.bmp");
}
void scene1(){
	iFilledRectangle(0, 0, 1920, 1080);
	iSetColor(0, 0, 0);
	iShowBMP(charX, charY, spongebob);
	if (charX < 0){
		charX = tempPosX;
		charY = tempPosY;
		sceneNumber--;
	}
		
	//iShowBMP(x, y, "Character\\scene1.bmp");
	//iShowBMP(x + 500, y + 200, "Character\\backbutton.bmp");
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
	
	/*if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if (sceneNumber == 0 && mx >= 500 && mx <= 500 + 512 && my >= 500 && my <= 500 + 360){
			sceneNumber++;
		}
		else if (sceneNumber == 1 && mx >= 500 && mx <= 500 + 800 && my >= 200 && my <= 200 + 400){
			sceneNumber--;
		}
	}*/
	
	
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
		charX += 30;
	}
	if (key == GLUT_KEY_LEFT)
	{
		charX -= 30;
	}
	
	if (key == GLUT_KEY_HOME)
	{
		
	}
	
}


int main()
{
	///srand((unsigned)time(NULL));
	iInitialize(SCREEN_WIDTH, SCREEN_HEIGHT, "Spongebob Super");
	///updated see the documentations
	iStart();
	return 0;
}