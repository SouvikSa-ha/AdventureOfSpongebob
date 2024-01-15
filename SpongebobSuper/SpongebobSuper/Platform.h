#ifndef PLATFORM_H_INCLUDED
#define PLATFORM_H_INCLUDED

#include "Variables.h"

struct Platform
{
	int platformX;
	int platformY;
	bool isLeft;

	Platform(int _platformX, int _platformY, bool _isLeft){
		platformX = _platformX;
		platformY = _platformY;
		isLeft = _isLeft;
	}

	Platform(int _platformX, int _platformY){
		platformX = _platformX;
		platformY = _platformY;	
	}

} movingPlatform_1(300, 150, true), movingPlatform_2(900, 258, false), movingPlatform_3(1, 150, false), movingPlatform_4(600, 300, true),
movingPlatform_5(1151, 150, true), movingPlatform_6(300, 258, true), movingPlatform_7(852, 258, false), movingPlatform_8(328, 400, true),
movingPlatform_9(824, 400, false), staticPlatform_1(400, 150), staticPlatform_2(576, 290), staticPlatform_3(475, 500), staticPlatform_4(1050, 150), staticPlatform_5(677, 500);

void movePlatform()
{
	if (sceneNumber == 1){
		(movingPlatform_4.isLeft) ? movingPlatform_4.platformX-- : movingPlatform_4.platformX++;

		(movePlayer == 4 && movingPlatform_4.isLeft) ? playerX-- : (movePlayer == 4 && !movingPlatform_4.isLeft) ? playerX++ : NULL;
	}
	else if(sceneNumber == 2){
		(movingPlatform_1.isLeft) ? movingPlatform_1.platformX-- : movingPlatform_1.platformX++;
		(movingPlatform_2.isLeft) ? movingPlatform_2.platformX-- : movingPlatform_2.platformX++;

		(movePlayer == 1 && movingPlatform_1.isLeft) ? playerX-- : (movePlayer == 1 && !movingPlatform_1.isLeft) ? playerX++ : NULL;
		(movePlayer == 2 && movingPlatform_2.isLeft) ? playerX-- : (movePlayer == 2 && !movingPlatform_2.isLeft) ? playerX++ : NULL;
	}
	else if (sceneNumber == 3){
		(movingPlatform_3.isLeft) ? movingPlatform_3.platformX-- : movingPlatform_3.platformX++;
		(movingPlatform_5.isLeft) ? movingPlatform_5.platformX-- : movingPlatform_5.platformX++;
		(movingPlatform_6.isLeft) ? movingPlatform_6.platformX-- : movingPlatform_6.platformX++;
		(movingPlatform_7.isLeft) ? movingPlatform_7.platformX-- : movingPlatform_7.platformX++;
		(movingPlatform_8.isLeft) ? (movingPlatform_8.platformX -= 2, movingPlatform_8.platformY++) : (movingPlatform_8.platformX += 2, movingPlatform_8.platformY--);
		(movingPlatform_9.isLeft) ? (movingPlatform_9.platformX -= 2, movingPlatform_9.platformY--) : (movingPlatform_9.platformX += 2, movingPlatform_9.platformY++);

		(movePlayer == 3 && movingPlatform_3.isLeft) ? playerX-- : (movePlayer == 3 && !movingPlatform_3.isLeft) ? playerX++ : NULL;
		(movePlayer == 5 && movingPlatform_5.isLeft) ? playerX-- : (movePlayer == 5 && !movingPlatform_5.isLeft) ? playerX++ : NULL;
		(movePlayer == 6 && movingPlatform_6.isLeft) ? playerX-- : (movePlayer == 6 && !movingPlatform_6.isLeft) ? playerX++ : NULL;
		(movePlayer == 7 && movingPlatform_7.isLeft) ? playerX-- : (movePlayer == 7 && !movingPlatform_7.isLeft) ? playerX++ : NULL;
		(movePlayer == 8 && movingPlatform_8.isLeft) ? (playerX -= 2, playerY++) : (movePlayer == 8 && !movingPlatform_8.isLeft) ? (playerX += 2, playerY--) : NULL;
		(movePlayer == 9 && movingPlatform_9.isLeft) ? (playerX -= 2, playerY--) : (movePlayer == 9 && !movingPlatform_9.isLeft) ? (playerX += 2, playerY++) : NULL;
	}

	/*{
		if (movingPlatform_1.isLeft)
			movingPlatform_1.platformX--;
		else
			movingPlatform_1.platformX++;
	}*/
}

void changePlatformDirection()
{
	if (sceneNumber == 1){
		(movingPlatform_4.platformX <= 0) ? movingPlatform_4.isLeft = false : (movingPlatform_4.platformX + platformDimensionX >= SCREEN_WIDTH) ? movingPlatform_4.isLeft = true : NULL;
	}
	else if (sceneNumber == 2){
		(movingPlatform_1.platformX <= 0) ? movingPlatform_1.isLeft = false : (movingPlatform_1.platformX + platformDimensionX >= SCREEN_WIDTH) ? movingPlatform_1.isLeft = true : NULL;
		(movingPlatform_2.platformX <= 0) ? movingPlatform_2.isLeft = false : (movingPlatform_2.platformX + platformDimensionX >= SCREEN_WIDTH) ? movingPlatform_2.isLeft = true : NULL;	
	}
	else if (sceneNumber == 3){
		(movingPlatform_3.platformX <= 0) ? movingPlatform_3.isLeft = false : (movingPlatform_3.platformX + platformDimensionX >= 500) ? movingPlatform_3.isLeft = true : NULL;
		(movingPlatform_5.platformX <= 780) ? movingPlatform_5.isLeft = false : (movingPlatform_5.platformX + platformDimensionX >= SCREEN_WIDTH) ? movingPlatform_5.isLeft = true : NULL;
		(movingPlatform_6.platformX <= 0) ? movingPlatform_6.isLeft = false : (movingPlatform_6.platformX + platformDimensionX >= 550) ? movingPlatform_6.isLeft = true : NULL;
		(movingPlatform_7.platformX <= 730) ? movingPlatform_7.isLeft = false : (movingPlatform_7.platformX + platformDimensionX >= SCREEN_WIDTH) ? movingPlatform_7.isLeft = true : NULL;
		(movingPlatform_8.platformX <= 0) ? movingPlatform_8.isLeft = false : (movingPlatform_8.platformX + platformDimensionX >= 550) ? movingPlatform_8.isLeft = true : NULL;
		(movingPlatform_9.platformX <= 730) ? movingPlatform_9.isLeft = false : (movingPlatform_9.platformX + platformDimensionX >= SCREEN_WIDTH) ? movingPlatform_9.isLeft = true : NULL;
	}
	/*{
		if (movingPlatform_1.platformX <= 0)
			movingPlatform_1.isLeft = false;
		else if (movingPlatform_1.platformX + platformDimensionX >= SCREEN_WIDTH)
			movingPlatform_1.isLeft = true;
	}*/	
}

#endif