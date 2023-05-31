#include "prodigy.h"
#include <cmath>
#include <Novice.h>


Prodigy::Prodigy(
    double initialPositionX, double initialPositionY, double initialVelocity) {
	posX_(initialPositionX), positionY(initialPositionY), velocity(initialVelocity)
}

void Prodigy::updatePosition() {
	double predictedX = opponent->posX_();
	double predictedY = opponent->predictPositionY();

	double deltaX = predictedX - positionX;
	double deltaY = predictedY - positionY;
	double angle = std::atan2(deltaY, deltaX);

	positionX += velocity * std::cos(angle);
	positionY += velocity * std::sin(angle);
}

double Prodigy::getPositionX() const { return positionX; }

double Prodigy::getPositionY() const { return positionY; }
