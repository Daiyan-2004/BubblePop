#include <cstdio>
#include "iGraphics.h"
#include "Balloon.hpp"
#include "Utils.hpp"

const int TOTAL_BALLOON = 5;
Balloon balloons[TOTAL_BALLOON];

int hit = 0;
int miss = 0;
char scoreText[50];

void iDraw()
{
	iClear();
	
	iSetColor(255, 255, 255);
	iFilledRectangle(0, 0, 800, 800);

	iSetColor(0, 0, 0);
	sprintf_s(scoreText, "HIT : %d", hit);	
	iText(50, 500, scoreText, GLUT_BITMAP_TIMES_ROMAN_24);
	sprintf_s(scoreText, "MISS : %d", miss);
	iText(50, 550, scoreText, GLUT_BITMAP_TIMES_ROMAN_24);

	for (int i = 0; i < TOTAL_BALLOON; i++){
		iShowImage(balloons[i].x, balloons[i].y, BALLOON_WIDTH, BALLOON_HEIGHT, balloons[i].image);
	}
}


void iMouseMove(int mx, int my)
{
	
}

void iPassiveMouseMove(int mx, int my)
{
	
}

void iMouse(int button, int state, int mx, int my)
{
	
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		for (int i = 0; i < TOTAL_BALLOON; ++i) {
			if (balloons[i].isHit(mx, my)) {
				balloons[i].resetBallon();
				++hit;
			}
		}
	}

}

void iKeyboard(unsigned char key)
{
	if (key == '\r')
	{
		
	}	
}

/*
function iSpecialKeyboard() is called whenver user hits special keys like function keys, home, end, pg up, pg down, arraows etc. you have to use appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6, GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12, GLUT_KEY_LEFT, GLUT_KEY_UP,
GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP, GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{
	if (key == GLUT_KEY_RIGHT)
	{
				
	}
	if (key == GLUT_KEY_LEFT)
	{
		
	}
	
	if (key == GLUT_KEY_HOME)
	{
		
	}	
}

void update(){
	for (int i = 0; i < TOTAL_BALLOON; i++){
		
		bool isOutOfBound = balloons[i].moveUp();

		if (isOutOfBound){
			miss++;
		}
	}
}

void initBalloons() {
	for (int i = 0; i < TOTAL_BALLOON; ++i) {
		char imageSource[100];
		sprintf_s(imageSource, "Images//balloon%d.png", i + 1);
		int image = iLoadImage(imageSource);
		balloons[i] = Balloon(image);
	}
}


int main()
{

	iSetTimer(10, update);
	iInitialize(SCREEN_WIDTH, SCREEN_HEIGHT, "Balloon Pop");
	
	initBalloons();
	
	iStart();
	return 0;
}