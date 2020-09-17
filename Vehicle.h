#pragma once
#include <iostream>
class Vehicle
{
public:
	double weight_of_the_vehicle;
	int max_speed;
	std::string means_of_movement;
	void action() {
		std::cout << " move " << std::endl;
	}
	Vehicle(double _weight_of_the_vehicle, int _max_speed, std::string _means_of_movement) {
		weight_of_the_vehicle = _weight_of_the_vehicle;
		max_speed = _max_speed;
		means_of_movement = _means_of_movement;
	}
	void PrintEntity()
	{
		std::cout << "weight_of_the_vehicle: " << weight_of_the_vehicle << " max_speed: " << max_speed << " means_of_movement: " << means_of_movement << std::endl;
	}
};

