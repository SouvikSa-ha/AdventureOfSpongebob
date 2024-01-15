#ifndef IMAGELOADER_H_INCLUDED
#define IMAGELOADER_H_INCLUDED

#include "Variables.h"
void loadImage()
{
	platform = iLoadImage(platform_Image);
	for (int i = 0; i < 8; i++)
	{
		bg[i] = iLoadImage(bg_Location[i]);
	}
	for (int i = 0; i < 2; i++)
	{
		enemy_Left[i] = iLoadImage(enemy_Left_Location[i]);
	}
	for (int i = 0; i < 2; i++)
	{
		enemy_Right[i] = iLoadImage(enemy_Right_Location[i]);
	}
	for (int i = 0; i < 4; i++)
	{
		enemy_Steady[i] = iLoadImage(enemy_Steady_Location[i]);
	}
	boss = iLoadImage(boss_Location);
	scroll = iLoadImage(scroll_Location);
	player_Idle = iLoadImage(player_Idle_Location);
	fireball = iLoadImage(fireball_Location);
}

#endif