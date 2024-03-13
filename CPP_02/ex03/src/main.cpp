#include "../includes/Point.hpp"

int main( void )
{
	Point a(1, 4);
	Point b(4.76, 3.4);
	Point c(2.57, 0.35);
	Point point(3, 3);

	if (bsp(a, b, c, point) == true)
		std::cout << "The point is inside the triangle" << std::endl;
	else
		std::cout << "The point is outside the triangle" << std::endl;
	return 0;
}
