#pragma once

class Player {
public:
	Player(int posX, int posY, int speed, int size);
	~Player();

	void Update(char keys[], char preKeys[]);
	void Draw();

	int GetposX() { return posX_; };
	int GetposY() { return posY_; };
	int GetspeedX() { return speed_; };
	int Getsize() { return size_; };
	void SetPosition(int x, int y);


private:
	int posX_;
	int posY_;
	int speed_;
	int size_;

};
