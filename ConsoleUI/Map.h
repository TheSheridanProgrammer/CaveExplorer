#pragma once
#include "GameObject.h"
#include <vector>

class Map : public GameObject {
public:
	std::vector<GameObject> obj_list;

	Map(std::string name) : GameObject(name) {
		this->name = name;
	}

};