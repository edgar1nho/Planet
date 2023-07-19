#include "Planet.h"

void Planet::setName(const std::string& n)
{
	name = n;
}
std::string Planet::getName()
{
	return name;
}
void Planet::setGravity(double g)
{
	gravity = g;
}
double Planet::getGravity()
{
	return gravity;
}
void Planet::setDistanceFromSun(double d)
{
	distance_from_sun = d;
}
double Planet::getDistanceFromSun()
{
	return distance_from_sun;
}

