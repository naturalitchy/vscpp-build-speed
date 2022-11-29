#include "one.h"

// example include.
#include <vector>		
#include <stdio.h>
#include <memory>

One::One() {
	std::cout << "One START!! (constructor) \n";
}

One::~One() {

}

void One::printOne() {
	std::cout << "One class" << std::endl;
	
	std::shared_ptr<int> examInt;
	printf("\n\n");

	
}