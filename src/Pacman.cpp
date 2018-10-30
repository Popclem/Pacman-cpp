#include <iostream>
#include <string>

#include "Pacman.h"

using namespace std;


	 Pacman::Pacman(): x(0), y(0){}
	 Pacman::Pacman(int x, int y) : x(x), y(y){}


	 int Pacman::getX() const {
	 	return x;
	 }

	 void Pacman::setX(int x) {
	 	this->x = x;
	 }

	 int Pacman::getY() const {
	 	return y;
	 }

	 void Pacman::setY(int y) {
	 	this->y = y;
	 }

	 string Pacman::getImage() {
	 	return image;
	 }

	 void Pacman::setImage(string image) {
	 	this->image = image;
	 }



	 void Pacman::goUp(){
		 image = "src/images/PacmanUp.PNG";
		 this-> y = y+1;
	 }
	 void Pacman::goDown(){
		 image = "src/images/PacmanDown.PNG";
		 this-> y = y-1;
	 }
	 void Pacman::goLeft(){
		 image = "src/images/PacmanLeft.PNG";
		 this-> x = x-1;
	 }
	 void Pacman::goRight(){
		 image = "src/images/PacmanRight.PNG";
		 this-> x = x+1;
	 }

