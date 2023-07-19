#include "Planet.h"
#include <string>
#include <iostream>

int main()
{
	Planet Mercury;
	Mercury.setName("Mercury");
	Mercury.setGravity(0.378);
	Mercury.setDistanceFromSun(0.387);
	std::cout << Mercury.getName() << " " << Mercury.getGravity() << " " << Mercury.getDistanceFromSun() << '\n';
}
