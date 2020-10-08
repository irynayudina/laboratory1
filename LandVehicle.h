#pragma once
#include <iostream>
#include "Vehicle.h"
class LandVehicle : public Vehicle
{ 
public:
	int amount_of_wheels;	
	LandVehicle(double _weight_of_the_vehicle, int _max_speed, std::string _means_of_movement, int _amount_of_wheels) : Vehicle(_weight_of_the_vehicle, _max_speed, _means_of_movement) {
		amount_of_wheels = _amount_of_wheels;
	}
	LandVehicle(double _weight_of_the_vehicle, int _max_speed, std::string _means_of_movement) : Vehicle(_weight_of_the_vehicle, _max_speed, _means_of_movement) {
		amount_of_wheels = 4;
	}
	 void PrintEntity() override
	{
		std::cout << "weight_of_the_vehicle: " << weight_of_the_vehicle << " max_speed: " << max_speed << " means_of_movement: " << means_of_movement << " amount_of_wheels: " << amount_of_wheels << std::endl;
	} 
};

