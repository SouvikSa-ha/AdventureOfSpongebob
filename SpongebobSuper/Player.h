#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

#include "Variables.h"

#include <iostream>
using namespace std;

void renderPlayer()
{
	if (playerHealth > 0){
		if (isJumping){
			if (jumpingUp)
				iShowImage(playerX, playerY + tempJumpChangeY, playerDimensionX, playerDimensionY, player_Idle);
			else
				iShowImage(playerX, playerY + tempJumpChangeY, playerDimensionX, playerDimensionY, player_Idle);
		}
		else{
			iShowImage(playerX, playerY, playerDimensionX, playerDimensionY, player_Idle);
		}
	}
	else
		gameOver = true;
}
void movePlayerRight()
{
	playerX += moveSpeed;
}

void movePlayerLeft()
{
	playerX -= moveSpeed;
}
void jumpControl()
{
	if (isJumping)
	{
		isGrounded = false;
		movePlayer = 0;
		if (jumpingUp)
		{
			tempJumpChange -= gravity;
			tempJumpChangeY += tempJumpChange;
			if (tempJumpChange <= 0)
			{
				jumpingUp = false;
			}
		}
		else
		{
			tempJumpChangeY -= tempJumpChange;
			tempJumpChange += gravity;
			if (tempJumpChange == jumpChange)
			{
				isJumping = false;
			}
		}
	}
}

void controlIdleAnimation()
{

}

void controlRunAnimation()
{

}

#endif