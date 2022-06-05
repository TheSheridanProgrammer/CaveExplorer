#pragma once
#include <iostream>
#include <string>
#include "Player.h"

std::string GetInput(std::string prompt) {
	std::string input;
	std::cout << prompt << std::endl;
	std::cin >> input;
	return input;
}

void Start() {
	std::cout << "Welcome to CaveExplorer" << std::endl;

	std::string name = GetInput("Enter your name: ");

	Player player = Player(name);

	
}