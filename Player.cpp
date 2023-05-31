#include "Player.h"
#include <Novice.h>

Player::Player(int posX, int posY, int speed, int size) {
	posX_ = posX;
	posY_ = posY;
	speed_ = speed;
	size_ = size;
}


void Player::Update(char keys[]) {
	if (keys[DIK_SPACE]) {
		if (posX_ > 240) {
			posY_ += speed_;
		}	
	}
		if (keys[DIK_SPACE]) posX_ += speed_;
}

void Player::SetPosition(int x, int y) {
	posX_ = x;
	posY_ = y;
}

void Player::Draw() {
	Novice::DrawBox(posX_, posY_, size_, size_, 0.0, WHITE, kFillModeSolid);
}