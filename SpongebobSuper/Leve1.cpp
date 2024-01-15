#include "iGraphics.h"

int platformX;
int platformY;
char* platform = "Character\\stair.bmp";
int sceneIndex = 4;
char* bc[] = { "scenes\\bc1.bmp", "scenes\\bc2_bottom.bmp", "scenes\\bc2_top.bmp", "scenes\\bc3.bmp", "scenes\\bc4.bmp", "scenes\\bc5.bmp", "scenes\\bc5_2.bmp", "scenes\\bc6.bmp" };

char* movingBC[] = { "scenes\\longbc.bmp", "scenes\\longbc.bmp" };

int background_one2[2];
int background_one2_x[] = { 0, 2512 }, background_one2_y[] = { 0, 0 };

//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://

void showBackGroundOne();
void loadImage();

void iDraw()
{
	iClear();
	/*if (sceneIndex == 1){
		iShowBMP(0, 0, bc[0]);
		iShowBMP2(200, 200, platform, 0);
		iShowBMP2(350, 200, platform, 0);
		iShowBMP2(420, 250, platform, 0);
	}
	else if (sceneIndex == 2){
		iShowBMP(0, 0, bc[1]);
		iShowBMP2(200, 200, platform, 0);
		iShowBMP2(350, 200, platform, 0);
		iShowBMP2(420, 250, platform, 0);
	}
	else if (sceneIndex == 3){
		iShowBMP(0, 0, bc[2]);
		iShowBMP2(200, 200 - 80, platform, 0);
		iShowBMP2(350, 200 - 80, platform, 0);
		iShowBMP2(420, 250 - 80, platform, 0);
	}
	else if (sceneIndex == 4){
		showBackGroundOne();
	}*/
	
	showBackGroundOne();
	
}

void loadImage(){
	background_one2[0] = iLoadImage("Scenes\\background_one2.png");
	background_one2[1] = iLoadImage("Scenes\\background_one2.png");
}

void showBackGroundOne(){
	for (int i = 0; i < 2; i++)
	{
		iShowImage(background_one2_x[i], 0, 2512, 792, background_one2[i]); //Shows the second inner moving background (the trees).
	}
}

void changeBackgroundOne2()
{
	for (int i = 0; i < 2; i++)
	{
		background_one2_x[i] -= 30; //left slide
		
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
	if (key == 'w')
	{
		if (sceneIndex == 2)
			sceneIndex = 3;
		else if (sceneIndex == 3)
			sceneIndex = 2;
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
		changeBackgroundOne2();

	}
	if (key == GLUT_KEY_LEFT)
	{
		
	}
	
	if (key == GLUT_KEY_HOME)
	{
		
	}
	
}


int main()
{
	///srand((unsigned)time(NULL));
	iInitialize(1280, 720, "Spongebob Super");
	loadImage();
	iStart();
	return 0;
}