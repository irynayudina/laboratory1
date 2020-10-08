#pragma once
#include "LandVehicle.h"
class Bike :
	public LandVehicle
{
public:
	void action() {
		std::cout << " ride " << std::endl;
	}
	Bike(double _weight_of_the_vehicle, int _max_speed, std::string _means_of_movement, int _amount_of_wheels) : LandVehicle(_weight_of_the_vehicle, _max_speed, _means_of_movement, _amount_of_wheels) {
	}
	void PrintEntity() override
	{
		std::cout << "weight_of_the_vehicle: " << weight_of_the_vehicle << " max_speed: " << max_speed << " means_of_movement: " << means_of_movement << " amount_of_wheels: " << amount_of_wheels << std::endl;
	}
};

