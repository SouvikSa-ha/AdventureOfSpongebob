#ifndef ENEMYCOLLISION_H_INCLUDED
#define PLATFORMCOLLISION_H_INCLUDED

#include "Variables.h"
#include "Enemy.h"

#include <iostream>
using namespace std;

//if(playerX + playerDimensionX >= ey.enemyX && playerX <= ey.enemyX + ey.enemyDimensionX && playerY <= ey.enemyY + ey.enemyDimensionY && playerY + playerDimensionY >= ey.enemyY)

void enemyCollision()
{
	if (sceneNumber == 1){
		if (!gBot_1.hit && playerX + playerDimensionX >= gBot_1.enemyX && playerX <= gBot_1.enemyX + gBot_1.enemyDimensionX && playerY + tempJumpChangeY <= gBot_1.enemyY + gBot_1.enemyDimensionY && playerY + playerDimensionY + tempJumpChangeY >= gBot_1.enemyY){
			//cout << "Player Collided at " << playerX << "\t" << playerY << endl;
			gBot_1.hit = true;
			playerHealth--;
		}
	}
	else if (sceneNumber == 2){
		if (!fish_1.hit && playerX + playerDimensionX >= fish_1.enemyX && playerX <= fish_1.enemyX + fish_1.enemyDimensionX && playerY + tempJumpChangeY <= fish_1.enemyY + fish_1.enemyDimensionY && playerY + playerDimensionY + tempJumpChangeY >= fish_1.enemyY){
			cout << "Player Collided at " << playerX << "\t" << playerY << endl;
			fish_1.hit = true;
			playerHealth--;
		}
		//else if (playerX + playerDimensionX >= fish_2.enemyX && playerX <= fish_2.enemyX + fish_2.enemyDimensionX && playerY <= fish_2.enemyY + fish_2.enemyDimensionY && playerY + playerDimensionY >= fish_2.enemyY){
			
		//}
		else if (!gBotMoving_1.hit && playerX + playerDimensionX >= gBotMoving_1.enemyX && playerX <= gBotMoving_1.enemyX + gBotMoving_1.enemyDimensionX && playerY + tempJumpChangeY <= gBotMoving_1.enemyY + gBotMoving_1.enemyDimensionY && playerY + playerDimensionY + tempJumpChangeY >= gBotMoving_1.enemyY){
			gBotMoving_1.hit = true;
			playerHealth--;
		}
	}
	else if (sceneNumber == 3 && !winGame){
		if (!hit && playerX + playerDimensionX >= fireballX + fireballChangeX && playerX <= fireballX + fireballChangeX + 20 && playerY + tempJumpChangeY <= fireballY + fireballChangeY + 20 && playerY + playerDimensionY + tempJumpChangeY >= fireballY + fireballChangeY){
			hit = true;
			playerHealth--;
		}
		else if (!bossDefeated && playerX + playerDimensionX / 2 >= 620 && playerX + playerDimensionX / 2 <= 650 && playerY + playerDimensionY / 2 + tempJumpChangeY <= 625 && playerY + playerDimensionY / 2 + tempJumpChangeY >= 570){
			bossDefeated = true;
		}
		else if (!bossDefeated && playerX + playerDimensionX / 2 >= 544 && playerX + playerDimensionX / 2 <= 712 && playerY + playerDimensionY / 2 + tempJumpChangeY <= 640 && playerY + playerDimensionY / 2 + tempJumpChangeY >= 570){
			hit = true;
			throwingFireball = false;
			stopThrow = true;
			playerHealth--;
		}
		else if (bossDefeated && playerX + playerDimensionX >= scrollX && playerX <= scrollX + scrollDimensionX && playerY <= scrollY + scrollDimensionY && playerY + playerDimensionY >= scrollY){
			cout << "Game Win";
			winGame = true;
		}
		else
			stopThrow = false;
	}
}

#endif

/*
gameoevr = false;
health = 100;
for (int i = 0; i < enemylength; i++) \\ 5
{
	if (playerX + playerDimensionX >= enemy[i].enemyX){
		health -= 40; \\ 60, 20, -20
	}
	if (health <= 0){
		gameOver = true;
		break;
	}
}
if (!gameover)
{
	iShowBMP(gamescreen);
	player;;;;
	enemy;
}


else {
	iShowBMP(gameoverscreen);
}
*/
