#include "opponent.h"
#include <Novice.h>

Opponent::Opponent(int posX, int posY, int speed) {
	posX_ = posX;
	posY_ = posY;
	speed_ = speed;
}

void Opponent::updatePosition(int newPosX, int newPosY) {
	prevPosX = posX_;
	prevPosY = posY_;
	posX_ = newPosX;
	posY_ = newPosY;
}

void Opponent::predictPositionX() const { return positionX + (positionX - prevPositionX); }