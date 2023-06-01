#include "prodigy.h"
#include <Novice.h>

Prodigy::Prodigy(int posX, int posY, int speedX, int speedY, int size, int flag) {
	posX_ = posX;
	posY_ = posY;
	speedX_ = speedX;
	speedY_ = speedY;
	size_ = size;
	flag_ = flag;
}


void Prodigy::Update(char keys[]) {
	if (keys[DIK_SPACE]) {
		if (flag_ == false) {
			posY_ += speedY_;
		}
		posX_ += speedX_;
	}
}

void Prodigy::Flag() {
	flag_ = true;
}

void Prodigy::SetPosition(int x, int y) {
	posX_ = x;
	posY_ = y;
}

void Prodigy::Draw() {
	Novice::DrawBox(posX_, posY_, size_, size_, 0.0, RED, kFillModeSolid);
}