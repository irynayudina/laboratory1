#pragma once
#include "Animal.h"
class Cat : public Animal {
public: void print() {
	std::cout << "meow" << std::endl;
}
};

