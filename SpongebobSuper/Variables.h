#ifndef VARIABLES_H_INCLUDED
#define VARIABLES_H_INCLUDED

#define SCREEN_WIDTH 1280
#define SCREEN_HEIGHT 720

//Timer_Vars
int timer_5ms_Value, timer_25ms_Value, timer_6s_Value, timer_5s_Value;
bool paused = false;

//Background_Vars
char* loadingImage = "Scenes\\Loading.bmp";
char* mainMenu = "Character\\Menu.bmp";
char* menu_Opt_Location[] = { "" };
int menu_opt[];
char* bg_Location[] = { "Scenes\\bg1.jpg", "Scenes\\bg2_bottom.jpg", "Scenes\\bg2_top.jpg", "Scenes\\bg3.jpg", "Scenes\\bg4.jpg", "Scenes\\bg5.jpg", "Scenes\\bg6.jpg", "Scenes\\bg7.png" };
int bg[8];
int sceneIndex = 0;

//Platform_Vars
char* platform_Image = "Objects\\platform.png";
int platform;
int platformDimensionX = 128;
int platformDimensionY = 29;

//Player_Vars
int playerX = 100;
int playerY = 50;
int playerDimensionX = 100;
int playerDimensionY = 100;
int moveSpeed = 14;
int runIndex = 0;
//bool stand = true;
bool isLeft = false;
bool isJumping = false;
bool jumpingUp = false;
int jumpChangeY;
int tempJumpChangeY = jumpChangeY = 0;
int jumpChange;
int tempJumpChange = jumpChange = 30;
int gravity = 3;
int playerHealth = 11;
char* player_Idle_Location = { "Player\\Spongebob.png" };
int player_Idle;
char* player_IdleBack[20] = { "" };
char* player_Running[20] = { "" };
char* player_RunningBack[20] = { "" };
char* player_Jumping[20] = { "" };
char* player_JumpingBack[20] = { "" };
char* player_WithGun[20] = { "" };
char* player_WithGunbBack[20] = { "" };

//MovingPlayer_Vars
int movePlayer = 0;

//Falling_Vars
bool isGrounded = true;
int fallRate = 20;
int mainGroundY = 50;

//Enemy_Vars
char* enemy_Left_Location[] = { "Enemy\\eL1.png", "Enemy\\eL2.png" };
int enemy_Left[2];
char* enemy_Right_Location[] = { "Enemy\\eR1.png", "Enemy\\eR2.png" };
int enemy_Right[2];
char* enemy_Steady_Location[] = { "Enemy\\eL3_1.png", "Enemy\\e3_2.png", "Enemy\\e3_3.png", "Enemy\\e3_4.png" };
int enemy_Steady[4];
char* boss_Location = "Enemy\\planktonBot.png";
int boss;
char* fireball_Location = "Objects\\fireball.png";
int fireball;
bool throwingFireball = false;
bool stopThrow = false;
int fireballX = 625;
int fireballY = 595;
bool hit = false;
int fireballChangeX = 0;
int fireballChangeY = 0;

//Level_Vars
bool gameInnitialized = true;
int gameInnitializedCount = 0;
int stageNumber = 1;
int sceneNumber = 3;
int tempPos1X, tempPos2X, tempPos3X, tempPos4X, tempPos5X;
int tempPos1Y, tempPos2Y, tempPos3Y, tempPos4Y, tempPos5Y;
int charInnitialX = 100;
int charInnitialY = mainGroundY;
char* scroll_Location = "Objects\\scroll.png";
int scroll;
int scrollX = 626;
int scrollY = 50;
int scrollDimensionX = 50;
int scrollDimensionY = 28;
bool lookUpEnabled = false;
bool gameOver = false;
bool bossDefeated = false;
bool winGame = false;

//Collision_Vars
//int collision_Check_Xmin = playerX + playerDimensionX / 2 - 5;
//int collision_Check_Xmax = playerX + playerDimensionX / 2 + 5;

#endif