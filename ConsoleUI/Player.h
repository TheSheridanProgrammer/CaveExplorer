#pragma once
#include <string>

class Player {
public:
	std::string name;
	int hitpoints;

	Player(std::string name) {
		this->name = name;
		hitpoints = 10;
	}
};