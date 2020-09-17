#pragma once
#include "LandVehicle.h"
class Car :
	public LandVehicle
{
public:
	std::string brand;
	int year;
	void action() 
	{
		std::cout << " drive " << std::endl;
	}
	Car(double _weight_of_the_vehicle, int _max_speed, std::string _means_of_movement, int _amount_of_wheels, std::string _brand, int _year) : LandVehicle(_weight_of_the_vehicle, _max_speed, _means_of_movement, _amount_of_wheels)
	{
		brand = _brand;
		year = _year;
	}
	void PrintEntity()
	{
		std::cout << "weight_of_the_vehicle: " << weight_of_the_vehicle << " max_speed: " << max_speed << " means_of_movement: " << means_of_movement << " amount_of_wheels: " << amount_of_wheels << "  brand: " << brand << " year: " << year << std::endl;
	}

};

