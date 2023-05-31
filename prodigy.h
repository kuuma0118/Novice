#include "Player.h"

class Prodigy {
public:
	Prodigy(int posX, int posY, int velocity, int speed, int size);
	~Prodigy();

	void Update(char keys[]);
	void Draw();

	int GetposX() { return posX_; };
	int GetposY() { return posY_; };
	int GetspeedX() { return speed_; };
	int Getsize() { return size_; };
	void SetPosition(int x, int y);

private:
	int posX_;
	int posY_;
	int velocity_;
	int speed_;
	int size_;
};
