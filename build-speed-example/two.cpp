#include "two.h"

// example include.
#include <Windows.h>
#include <string>
#include <iostream>

Two::Two() {
	std::cout << "Two START!! (constructor)\n";
}

Two::~Two() {

}

void Two::printTwo() {
	std::cout << "Two class" << std::endl;
	std::string str = "HELLO Two class";
	std::cout << "Two str = " << str << std::endl;
}