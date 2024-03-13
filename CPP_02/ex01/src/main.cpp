#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed b( 20 );
	Fixed c( 5.14f );
	Fixed d( b );
	std::cout << "\n-------- START --------\n" << std::endl;
	std::cout <<  "Initial values :\n" << std::endl;
	std::cout << "\ta is " << a << std::endl;
	std::cout << "\tb is " << b << std::endl;
	std::cout << "\tc is " << c << std::endl;
	std::cout << "\td is " << d << std::endl;

	std::cout << "\nValue to Int :\n" << std::endl;

	std::cout << "\ta is " << a.toInt() << " as integer" << std::endl;
	std::cout << "\tb is " << b.toInt() << " as integer" << std::endl;
	std::cout << "\tc is " << c.toInt() << " as integer" << std::endl;
	std::cout << "\td is " << d.toInt() << " as integer" << std::endl;

	std::cout << "\nAnd now to Float :\n" << std::endl;

	std::cout << "\ta is " << a.toFloat() << " as float" << std::endl;
	std::cout << "\tb is " << b.toFloat() << " as float" << std::endl;
	std::cout << "\tc is " << c.toFloat() << " as float" << std::endl;
	std::cout << "\td is " << d.toFloat() << " as float" << std::endl;

	std::cout << "\n\nMaking some changes : \n" << std::endl;
	a = Fixed( 5834.48f );
	d = b;
	std::cout << "\n\tNow a is " << a << std::endl;
	std::cout << "\tNow d is " << d << "\n" << std::endl;
	std::cout <<"\n-------- END --------\n" << std::endl;

	return (0);
}
