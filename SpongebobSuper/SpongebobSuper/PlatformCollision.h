#ifndef PLATFORMCOLLISION_H_INCLUDED
#define PLATFORMCOLLISION_H_INCLUDED

#include "Variables.h"

void staticCollisionData(int);
void jumpCollisiondata();

void platformCollision()
{	
	if (sceneNumber == 1){
		if (playerX + playerDimensionX * 3 / 4 >= staticPlatform_1.platformX && playerX + playerDimensionX / 4 <= staticPlatform_1.platformX + platformDimensionX && playerY + tempJumpChangeY <= staticPlatform_1.platformY + platformDimensionY + 10 && playerY + tempJumpChangeY >= staticPlatform_1.platformY){
			if (!isJumping && !jumpingUp){
				staticCollisionData(staticPlatform_1.platformY);
			}
			else if (isJumping && !jumpingUp){
				staticCollisionData(staticPlatform_1.platformY);
				jumpCollisiondata();
			}
		}
		else if (playerX + playerDimensionX * 3 / 4 >= movingPlatform_4.platformX && playerX + playerDimensionX / 4 <= movingPlatform_4.platformX + platformDimensionX && playerY + tempJumpChangeY <= movingPlatform_4.platformY + platformDimensionY + 10 && playerY + tempJumpChangeY >= movingPlatform_4.platformY){
			if (!isJumping && !jumpingUp){
				movePlayer = 4;
				staticCollisionData(movingPlatform_4.platformY);
			}
			else if (isJumping && !jumpingUp){
				staticCollisionData(movingPlatform_4.platformY);
				jumpCollisiondata();
			}
		}
		
		else if (playerX + playerDimensionX * 3 / 4 >= staticPlatform_4.platformX && playerX + playerDimensionX / 4 <= staticPlatform_4.platformX + platformDimensionX && playerY + tempJumpChangeY <= staticPlatform_4.platformY + platformDimensionY + 10 && playerY + tempJumpChangeY >= staticPlatform_4.platformY){
			if (!isJumping && !jumpingUp){
				staticCollisionData(staticPlatform_4.platformY);
			}
			else if (isJumping && !jumpingUp){
				staticCollisionData(staticPlatform_4.platformY);
				jumpCollisiondata();
			}
		}
		else if (playerY == mainGroundY)
			isGrounded = true;
		else
			isGrounded = false;
	}


	else if (sceneNumber == 2){
		if (playerX + playerDimensionX * 3 / 4 >= movingPlatform_1.platformX && playerX + playerDimensionX / 4 <= movingPlatform_1.platformX + platformDimensionX && playerY + tempJumpChangeY <= movingPlatform_1.platformY + platformDimensionY + 10 && playerY + tempJumpChangeY >= movingPlatform_1.platformY){
			if (!isJumping && !jumpingUp){
				movePlayer = 1;
				staticCollisionData(movingPlatform_1.platformY);
			}
			else if (isJumping && !jumpingUp){
				staticCollisionData(movingPlatform_1.platformY);
				jumpCollisiondata();
			}
		}
		else if (playerX + playerDimensionX * 3 / 4 >= movingPlatform_2.platformX && playerX + playerDimensionX / 4 <= movingPlatform_2.platformX + platformDimensionX && playerY + tempJumpChangeY <= movingPlatform_2.platformY + platformDimensionY + 10 && playerY + tempJumpChangeY >= movingPlatform_2.platformY){
			if (!isJumping && !jumpingUp){
				movePlayer = 2;
				staticCollisionData(movingPlatform_2.platformY);
			}
			else if (isJumping && !jumpingUp){
				staticCollisionData(movingPlatform_2.platformY);
				jumpCollisiondata();
			}
		}
		else if (playerY == mainGroundY)
			isGrounded = true;
		else
			isGrounded = false;
	}


	else if (sceneNumber == 3){
		if (playerX + playerDimensionX * 3 / 4 >= movingPlatform_3.platformX && playerX + playerDimensionX / 4 <= movingPlatform_3.platformX + platformDimensionX && playerY + tempJumpChangeY <= movingPlatform_3.platformY + platformDimensionY + 10 && playerY + tempJumpChangeY >= movingPlatform_3.platformY){
			if (!isJumping && !jumpingUp){
				movePlayer = 3;
				staticCollisionData(movingPlatform_3.platformY);
			}
		
			else if (isJumping && !jumpingUp){
				staticCollisionData(movingPlatform_3.platformY);
				jumpCollisiondata();
			}
		}
		else if (playerX + playerDimensionX * 3 / 4 >= movingPlatform_5.platformX && playerX + playerDimensionX / 4 <= movingPlatform_5.platformX + platformDimensionX && playerY + tempJumpChangeY <= movingPlatform_5.platformY + platformDimensionY + 10 && playerY + tempJumpChangeY >= movingPlatform_5.platformY){
			if (!isJumping && !jumpingUp){
				movePlayer = 5;
				staticCollisionData(movingPlatform_5.platformY);
			}

			else if (isJumping && !jumpingUp){
				staticCollisionData(movingPlatform_5.platformY);
				jumpCollisiondata();
			}
		}
		else if (playerX + playerDimensionX * 3 / 4 >= movingPlatform_6.platformX && playerX + playerDimensionX / 4 <= movingPlatform_6.platformX + platformDimensionX && playerY + tempJumpChangeY <= movingPlatform_6.platformY + platformDimensionY + 10 && playerY + tempJumpChangeY >= movingPlatform_6.platformY){
			if (!isJumping && !jumpingUp){
				movePlayer = 6;
				staticCollisionData(movingPlatform_6.platformY);
			}

			else if (isJumping && !jumpingUp){
				staticCollisionData(movingPlatform_6.platformY);
				jumpCollisiondata();
			}
		}
		else if (playerX + playerDimensionX * 3 / 4 >= movingPlatform_7.platformX && playerX + playerDimensionX / 4 <= movingPlatform_7.platformX + platformDimensionX && playerY + tempJumpChangeY <= movingPlatform_7.platformY + platformDimensionY + 10 && playerY + tempJumpChangeY >= movingPlatform_7.platformY){
			if (!isJumping && !jumpingUp){
				movePlayer = 7;
				staticCollisionData(movingPlatform_7.platformY);
			}

			else if (isJumping && !jumpingUp){
				staticCollisionData(movingPlatform_7.platformY);
				jumpCollisiondata();
			}
		}
		else if (playerX + playerDimensionX * 3 / 4 >= movingPlatform_8.platformX && playerX + playerDimensionX / 4 <= movingPlatform_8.platformX + platformDimensionX && playerY + tempJumpChangeY <= movingPlatform_8.platformY + platformDimensionY + 10 && playerY + tempJumpChangeY >= movingPlatform_8.platformY){
			if (!isJumping && !jumpingUp){
				movePlayer = 8;
				staticCollisionData(movingPlatform_8.platformY);
			}

			else if (isJumping && !jumpingUp){
				staticCollisionData(movingPlatform_8.platformY);
				jumpCollisiondata();
			}
		}
		else if (playerX + playerDimensionX * 3 / 4 >= movingPlatform_9.platformX && playerX + playerDimensionX / 4 <= movingPlatform_9.platformX + platformDimensionX && playerY + tempJumpChangeY <= movingPlatform_9.platformY + platformDimensionY + 10 && playerY + tempJumpChangeY >= movingPlatform_9.platformY){
			if (!isJumping && !jumpingUp){
				movePlayer = 9;
				staticCollisionData(movingPlatform_9.platformY);
			}

			else if (isJumping && !jumpingUp){
				staticCollisionData(movingPlatform_9.platformY);
				jumpCollisiondata();
			}
		}
		else if (playerX + playerDimensionX * 3 / 4 >= staticPlatform_2.platformX && playerX + playerDimensionX / 4 <= staticPlatform_2.platformX + platformDimensionX && playerY + tempJumpChangeY <= staticPlatform_2.platformY + platformDimensionY + 10 && playerY + tempJumpChangeY >= staticPlatform_2.platformY){
			if (!isJumping && !jumpingUp){
				staticCollisionData(staticPlatform_2.platformY);
			}

			else if (isJumping && !jumpingUp){
				staticCollisionData(staticPlatform_2.platformY);
				jumpCollisiondata();
			}
		}
		else if (playerX + playerDimensionX * 3 / 4 >= staticPlatform_3.platformX && playerX + playerDimensionX / 4 <= staticPlatform_3.platformX + platformDimensionX && playerY + tempJumpChangeY <= staticPlatform_3.platformY + platformDimensionY + 10 && playerY + tempJumpChangeY >= staticPlatform_3.platformY){
			if (!isJumping && !jumpingUp){
				staticCollisionData(staticPlatform_3.platformY);
			}

			else if (isJumping && !jumpingUp){
				staticCollisionData(staticPlatform_3.platformY);
				jumpCollisiondata();
			}
		}
		else if (playerX + playerDimensionX * 3 / 4 >= staticPlatform_5.platformX && playerX + playerDimensionX / 4 <= staticPlatform_5.platformX + platformDimensionX && playerY + tempJumpChangeY <= staticPlatform_5.platformY + platformDimensionY + 10 && playerY + tempJumpChangeY >= staticPlatform_5.platformY){
			if (!isJumping && !jumpingUp){
				staticCollisionData(staticPlatform_5.platformY);
			}

			else if (isJumping && !jumpingUp){
				staticCollisionData(staticPlatform_5.platformY);
				jumpCollisiondata();
			}
		}
		else if (playerY == mainGroundY)
			isGrounded = true;
		else
			isGrounded = false;
	}
}

//Demi... search --> pt
/*
if (playerX + playerDimensionX * 3 / 4 >= pt.platformX && playerX + playerDimensionX / 4 <= pt.platformX + platformDimensionX && playerY + tempJumpChangeY <= pt.platformY + platformDimensionY + 10 && playerY + tempJumpChangeY >= pt.platformY){
	if (!isJumping && !jumpingUp){
		staticCollisionData(pt.platformY);
	}
	else if (isJumping && !jumpingUp){
		staticCollisionData(pt.platformY);
		jumpCollisiondata();
	}
}*/

void staticCollisionData(int platY){
	playerY = platY + platformDimensionY - 7;
	isGrounded = true;
}
void jumpCollisiondata(){
	isJumping = false;
	tempJumpChange = jumpChange;
	tempJumpChangeY = jumpChangeY;
}

void fall()
{
	if (!isJumping && !isGrounded /*&& playerY > mainGroundY*/){
		//fallRate += gravity;
		playerY -= fallRate;
		isGrounded = false;
		movePlayer = 0;
		if (playerY <= mainGroundY){
			isGrounded = true;
			playerY = mainGroundY;
		}
	}	
}

#endif