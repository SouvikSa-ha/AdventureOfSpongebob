#ifndef ENEMY_H_INCLUDED
#define ENEMY_H_INCLUDED

#include <math.h>
struct Enemy
{
	int enemyX;
	int enemyY;
	int enemyDimensionX;
	int enemyDimensionY;
	bool isLeft;
	bool hit;

	Enemy(int _enemyX, int _enemyY, int _enemyDimensionX, int _enemyDImensionY, bool _hit){
		enemyX = _enemyX;
		enemyY = _enemyY;
		enemyDimensionX = _enemyDimensionX;
		enemyDimensionY = _enemyDImensionY;
		hit = _hit;
	}

	Enemy(int _enemyX, int _enemyY, int _enemyDimensionX, int _enemyDImensionY, bool _isLeft, bool _hit){
		enemyX = _enemyX;
		enemyY = _enemyY;
		enemyDimensionX = _enemyDimensionX;
		enemyDimensionY = _enemyDImensionY;
		isLeft = _isLeft;
		hit = _hit;
	}

} fish_1(400, 295, 48, 30, true, false), fish_2(1000, 365, 48, 30, true, false), gBot_1(800, 50, 120, 140, false), gBot_2(50, 50, 120, 140, false),
gBotMoving_1(650, 50, 120, 140, true, false), gBotMoving_2(50, 50, 120, 140, true, false),
bot[2] = { Enemy(500, 400, 64, 68, false), Enemy(50, 50, 100, 100, false) }, missile[2] = { Enemy(500, 400, 16, 8, false), Enemy(50, 50, 16, 8, false) };

void moveEnemyLR()
{
	if (sceneNumber == 2){
		(fish_1.isLeft) ? fish_1.enemyX-- : fish_1.enemyX++;
		//(fish_2.isLeft) ? fish_2.enemyX-- : fish_2.enemyX++;
		(gBotMoving_1.isLeft) ? gBotMoving_1.enemyX-- : gBotMoving_1.enemyX++;
	}
}
void moveEnemyCorner()
{
	if (sceneNumber == 7){
		(fish_2.isLeft) ? (fish_2.enemyX--, fish_2.enemyY--) : (fish_2.enemyX++, fish_2.enemyY++);
	}
}

void changeEnemyDirection()
{
	(fish_1.isLeft) ? fish_1.isLeft = false : fish_1.isLeft = true;
	(fish_2.isLeft) ? fish_2.isLeft = false : fish_2.isLeft = true;
	(gBotMoving_1.isLeft) ? gBotMoving_1.isLeft = false : gBotMoving_1.isLeft = true;
}
int targetX;
int targetY;
double xDiff;
double yDiff;
double slope;
double xRate;
int yRate;
void throwFireball()
{
	if (sceneNumber == 3 && !bossDefeated && !stopThrow){
		throwingFireball = true;
		hit = false;
		fireballChangeX = 0;
		fireballChangeY = 0;
		targetX = playerX + playerDimensionX - 10;
		targetY = playerY + playerDimensionY - 10;
	}
}

void changeFireballDirection()
{
	
	if (sceneNumber == 3 && throwingFireball && !hit && !bossDefeated){
		double xDiff = abs(fireballX - targetX);
		double yDiff = abs(fireballY - targetY);
		double slope;
		if (xDiff != 0)
			slope = yDiff / xDiff;
		double xRate = 0;
		int yRate;
		if (targetX!= fireballX){
			if (targetX < fireballX - 300){
				xRate = 5;
				fireballChangeX -= (int)xRate;
			}
			else if (targetX > fireballX + 300){
				xRate = 5;
				fireballChangeX += (int)xRate;
			}
			else if (targetX >= fireballX - 300 && targetX < fireballX - 180){
				xRate = 4;
				fireballChangeX -= (int)xRate;
			}
			else if (targetX >= fireballX + 180 && targetX < fireballX + 300){
				xRate = 4;
				fireballChangeX += (int)xRate;
			}
			else if (targetX >= fireballX - 180 && targetX < fireballX - 80){
				xRate = 2 ;
				fireballChangeX -= (int)xRate;
			}
			else if (targetX >= fireballX + 80 && targetX < fireballX + 180){
				xRate = 2;
				fireballChangeX += (int)xRate;
			}
			else if (targetX >= fireballX - 80 &&  targetX < fireballX - 35){
				xRate = 1;
				fireballChangeX -= (int)xRate;
			}
			else if (targetX >= fireballX && targetX < fireballX + 80){
				xRate = 1;
				fireballChangeX += (int)xRate;
			}
			else if (targetX >= fireballX - 30 && targetX < fireballX){
				xRate = .35;
				fireballChangeX--;		
			}
			else if (targetX >= fireballX && targetX < fireballX + 30){
				xRate = .2;
				fireballChangeX++;
			}
		}
		if (targetY+ tempJumpChangeY != fireballY){
			(xRate == 0) ? yRate = 4 : yRate = (int)(xRate *slope);
			(targetY< fireballY) ? fireballChangeY -= yRate : (playerY = playerDimensionY / 2 + tempJumpChangeY > fireballChangeY) ? fireballChangeY += yRate : NULL;
		}
	}
}


void moveEnemyUpDown()
{

}

void moveMissile()
{

}

#endif