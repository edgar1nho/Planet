#include <string>

class Planet
{
	private:
		std::string name;
		double gravity;
		double distance_from_sun;
	public:
		void setName(const std::string& n);
		std::string getName();
		void setGravity(double g);
		double getGravity();
		void setDistanceFromSun(double d);
		double getDistanceFromSun();
};
