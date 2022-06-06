#pragma once
#include <string>
#include "GameObject.h"

class Player : public GameObject{
public:
	int hitpoints;

	Player(std::string name) : GameObject(name) {
		hitpoints = 10;
	}
};