#pragma once

class Prodigy {
public:
	Prodigy(int posX, int posY, int speedX, int speedY, int size, int flag);
	
	void Update(char keys[]);
	void Draw();
	void Flag();

	int GetposX() { return posX_; };
	int GetposY() { return posY_; };
	int GetspeedX() { return speedX_; };
	int GetspeedY() { return speedY_; };
	int Getsize() { return size_; };
	int Getflag() { return flag_; };
	void SetPosition(int x, int y);


private:
	int posX_;
	int posY_;
	int speedX_;
	int speedY_;
	int size_;
	int flag_;
};
