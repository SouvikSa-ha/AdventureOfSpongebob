#define _CRT_SECURE_NO_WARNINGS

#include "iGraphics.h"
#include "Variables.h"
#include "Platform.h"
#include "Stages.h"
#include "Player.h"
#include "Enemy.h"
#include "LoadImage.h"

#include <iostream>
using namespace std;

//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://

void iDraw()
{	
	iClear();
	if (!gameInnitialized){
		iShowBMP(0, 0, loadingImage);
		gameInnitializedCount++;
		if (gameInnitializedCount == 200)
			gameInnitialized = false;
	}
	else if(!gameOver && !winGame){
		if (sceneNumber == 0){
			loadMenu();		
		}
		else if (sceneNumber >= 1 && stageNumber == 1 && !paused){
			loadStage_1();
			//cout << playerX + playerDimensionX / 2 << "\t" << playerY + playerDimensionY / 2 << endl;
			//cout << playerHealth << endl;
		}
		else{
			iText(610, 350, "Paused", GLUT_BITMAP_TIMES_ROMAN_24);
		}
	}
	else if (gameOver){
		iSetColor(234, 134, 45);
		iText(625, 350, "You Lost", GLUT_BITMAP_TIMES_ROMAN_24);
	}
	else if (winGame){
		iSetColor(234, 134, 45);
		iText(625, 350, "You Won", GLUT_BITMAP_TIMES_ROMAN_24);
		//cout << playerHealth;
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
		//cout << mx << "\t" << my << endl;
		if (sceneNumber == 0 && mx >= 1010 && mx <= 1774 && my >= 520 && my <= 580){
			sceneNumber++;
		}
		//else if (sceneNumber == 1 && mx >= 1010 && mx <= 1774 && my >= 520 && my <= 580){
		//	sceneNumber--;
		//}
	}
	
	
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		cout << mx << "\t" << my << endl;
	}
}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/


void iKeyboard(unsigned char key)
{
	if (!paused && key == 'p')
	{
		paused = true;
		iPauseTimer(timer_5ms_Value);
		iPauseTimer(timer_25ms_Value);
		iPauseTimer(timer_6s_Value);
		iPauseTimer(timer_5s_Value);
	}
	else if (paused && key == 'p'){
		paused = false;
		iResumeTimer(timer_5ms_Value);
		iResumeTimer(timer_25ms_Value);
		iResumeTimer(timer_6s_Value);
		iResumeTimer(timer_5s_Value);
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
	
	if (key == GLUT_KEY_RIGHT){
		if (sceneNumber >= 1)
			movePlayerRight();
	} else if (key == GLUT_KEY_LEFT){
		if (sceneNumber >= 1)
			movePlayerLeft();
	} else if (key == GLUT_KEY_UP){
		if (sceneNumber >= 1 && isGrounded)
		if (!isJumping){
			isJumping = true;
			jumpingUp = true;
		}
	}

}
void timer_5ms(){
	movePlatform();
}

void timer_25ms(){
	changePlatformDirection();
	moveEnemyLR();
	moveEnemyCorner();
	jumpControl();
	changeFireballDirection();
	fall();
}

void timer_6s(){
	changeEnemyDirection();
}

void timer_5s(){
	throwFireball();
}

int main()
{
	///srand((unsigned)time(NULL));
	iInitialize(SCREEN_WIDTH, SCREEN_HEIGHT, "Project Title");
	system("Color 0E");
	cout << "Innitializing... please wait" << endl;
	loadImage();
	timer_5ms_Value = iSetTimer(5, timer_5ms);
	timer_25ms_Value = iSetTimer(25, timer_25ms);
	timer_6s_Value = iSetTimer(6000, timer_6s);
	timer_5s_Value = iSetTimer(5000, timer_5s);

	///updated see the documentations
	iStart();
	return 0;
}