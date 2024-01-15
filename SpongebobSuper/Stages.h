#ifndef STAGES_H_INCLUDED
#define STAGES_H_INCLUDED

//#include "iGraphics.h"
#include "LoadImage.h"
#include "Platform.h"
#include "Player.h"
#include "PlatformCollision.h"
#include "Enemy.h"
#include "EnemyCollision.h"

#include <iostream>
using namespace std;

void scene1();
void scene2();
void scene3();
void scene4();
void scene5();


void loadMenu()
{
	iShowBMP(0, 0, mainMenu);
}
void loadStage_1()
{
	if (sceneNumber == 1){
		scene1();
	}
	else if (sceneNumber == 2){
		scene2();
	}
	else if (sceneNumber == 3){
		scene3();
	}
}

void scene1()
{
	iShowImage(0, 0, 1280, 720, bg[0]);
	renderPlayer();
	iShowImage(staticPlatform_1.platformX, staticPlatform_1.platformY, platformDimensionX, platformDimensionY, platform);
	iShowImage(movingPlatform_4.platformX, movingPlatform_4.platformY, platformDimensionX, platformDimensionY, platform);
	iShowImage(staticPlatform_4.platformX, staticPlatform_4.platformY, platformDimensionX, platformDimensionY, platform);
	(!gBot_1.hit) ? iShowImage(gBot_1.enemyX, gBot_1.enemyY, gBot_1.enemyDimensionX, gBot_1.enemyDimensionY, enemy_Left[1]) : NULL;
	platformCollision();
	enemyCollision();
	(playerX < 10) ? playerX = 10 : NULL;
	tempPos1X = playerX - playerDimensionX/2;
	tempPos1Y = playerY;
	if (playerX + playerDimensionX/2 > SCREEN_WIDTH){
		playerX = charInnitialX;
		playerY = charInnitialY;
		sceneNumber++;
	}
}

//iShowImage(.platformX, .platformY, platformDimensionX, platformDimensionY, platform);
//(ey.isLeft) ? iShowImage(ey.enemyX, ey.enemyY, ey.enemyDimensionX, ey.enemyDimensionY, enemy_Left[]) : iShowImage(ey.enemyX, ey.enemyY, ey.enemyDimensionX, ey.enemyDimensionY, enemy_Right[]);
void scene2()
{
	iShowImage(0, 0, 1280, 720, bg[1]);
	renderPlayer();
	iShowImage(movingPlatform_1.platformX, movingPlatform_1.platformY, platformDimensionX, platformDimensionY, platform);
	iShowImage(movingPlatform_2.platformX, movingPlatform_2.platformY, platformDimensionX, platformDimensionY, platform);
	if (!fish_1.hit)
		(fish_1.isLeft) ? iShowImage(fish_1.enemyX, fish_1.enemyY, fish_1.enemyDimensionX, fish_1.enemyDimensionY, enemy_Left[0]) : iShowImage(fish_1.enemyX, fish_1.enemyY, fish_1.enemyDimensionX, fish_1.enemyDimensionY, enemy_Right[0]);
	//(fish_2.isLeft) ? iShowImage(fish_2.enemyX, fish_2.enemyY, fish_2.enemyDimensionX, fish_2.enemyDimensionY, enemy_Left[0]) : iShowImage(fish_2.enemyX, fish_2.enemyY, fish_2.enemyDimensionX, fish_2.enemyDimensionY, enemy_Right[0]);
	if (!gBotMoving_1.hit)
		(gBotMoving_1.isLeft) ? iShowImage(gBotMoving_1.enemyX, gBotMoving_1.enemyY, gBotMoving_1.enemyDimensionX, gBotMoving_1.enemyDimensionY, enemy_Left[1]) : iShowImage(gBotMoving_1.enemyX, gBotMoving_1.enemyY, gBotMoving_1.enemyDimensionX, gBotMoving_1.enemyDimensionY, enemy_Right[1]);
	platformCollision();
	enemyCollision();
	tempPos2X = playerX - playerDimensionX / 2;
	tempPos2Y = playerY;
	platformCollision();
	if (playerX < 0){
		playerX = tempPos1X;
		playerY = tempPos1Y;
		sceneNumber--;
	}
	else if (playerX + playerDimensionX/2 > SCREEN_WIDTH){
		playerX = charInnitialX;
		playerY = charInnitialY;
		sceneNumber++;
	}
}

void scene3(){
	iShowImage(0, 0, 1280, 720, bg[7]);
	(bossDefeated) ? iShowImage(scrollX, scrollY, scrollDimensionX, scrollDimensionY, scroll) : iShowImage(335, 100, 596, 662, boss);
	renderPlayer();
	iShowImage(movingPlatform_3.platformX, movingPlatform_3.platformY, platformDimensionX, platformDimensionY, platform);
	iShowImage(movingPlatform_5.platformX, movingPlatform_5.platformY, platformDimensionX, platformDimensionY, platform);
	iShowImage(movingPlatform_6.platformX, movingPlatform_6.platformY, platformDimensionX, platformDimensionY, platform);
	iShowImage(movingPlatform_7.platformX, movingPlatform_7.platformY, platformDimensionX, platformDimensionY, platform);
	iShowImage(movingPlatform_8.platformX, movingPlatform_8.platformY, platformDimensionX, platformDimensionY, platform);
	iShowImage(movingPlatform_9.platformX, movingPlatform_9.platformY, platformDimensionX, platformDimensionY, platform);
	iShowImage(staticPlatform_2.platformX, staticPlatform_2.platformY, platformDimensionX, platformDimensionY, platform);
	iShowImage(staticPlatform_3.platformX, staticPlatform_3.platformY, platformDimensionX, platformDimensionY, platform);
	iShowImage(staticPlatform_5.platformX, staticPlatform_5.platformY, platformDimensionX, platformDimensionY, platform);
	if (throwingFireball && !hit && !bossDefeated && !stopThrow){ iShowImage(fireballX + fireballChangeX, fireballY + fireballChangeY, 20, 19, fireball); }
	platformCollision();
	enemyCollision();

	(playerX < 10) ? playerX = 10 : (playerX + playerDimensionX > SCREEN_WIDTH) ? playerX = SCREEN_WIDTH - playerDimensionX : NULL;
	
}

#endif