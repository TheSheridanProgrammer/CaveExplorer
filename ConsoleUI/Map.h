#pragma once
#include "GameObject.h"
#include <vector>

class Map : public GameObject {
private:
	std::vector<GameObject> obj_list;
public:
	
	Map(std::string name) : GameObject(name) {
		this->name = name;
	}

	void AcceptVisitor(Player player) {
		obj_list.push_back(player);
	}

	std::vector<GameObject> GetMapObjects() {
		return obj_list;
	}
};