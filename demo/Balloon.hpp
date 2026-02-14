#ifndef BALLOON_H
#define BALLOON_H

#include <stdlib.h>
#include <math.h>
#include "Utils.hpp"

const int MAX_BALLOON_SPEED = 5;
const int BALLOON_HEIGHT = 100;
const int BALLOON_WIDTH = 100;

struct Balloon {
	double x;
	double y;
	double speed;
	int image;
	static int height;

	Balloon() {
		this->resetBallon();
	}

	Balloon(int image) {
		this->image = image;
		this->resetBallon();
	}

	void resetBallon() {
		this->x = (rand() % SCREEN_WIDTH) + 1;
		this->y = 0;
		this->speed = (rand() % MAX_BALLOON_SPEED) + 1;
	}

	bool moveUp() {
		this->y += this->speed;

		if (this->y > SCREEN_HEIGHT) {
			this->resetBallon();
			return true;
		}
		return false;
	}

	bool isHit(int mx, int my) {
		double dist = getEuclideanDistance(this->x + (BALLOON_WIDTH / 2), mx, this->y + (BALLOON_HEIGHT / 2), my);
		if (dist < BALLOON_HEIGHT / 2) {
			return true;
		}
		return false;
	}

};


#endif
