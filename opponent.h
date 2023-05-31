#pragma once

class Opponent {
public:
	Opponent(int posX, int posY, int speed);
	~Opponent();

	 void updatePosition(int newPositionX, int newPositionY);

	int GetpredictposX() { return posX_; };
	int GetpredictposY() { return posY_; };

private:
	int posX_;
	int posY_;
	int speed_;
	int prevPosX;
	int prevPosY;
};
