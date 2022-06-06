#pragma once
#include <string>
#include "GameObject.h"

class Player : public GameObject{
private:
	int hitpoints;
public:

	Player(std::string name) : GameObject(name) {
		hitpoints = 10;
	}
};