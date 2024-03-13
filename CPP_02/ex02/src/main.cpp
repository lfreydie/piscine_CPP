#include "../includes/Fixed.hpp"

int main( void )
{
Fixed a;
	Fixed b( 8 );
	Fixed c( 3.14f );
	Fixed d( 42.42f );
	Fixed e = b;
	std::cout << "\n\n--------------------- START --------------------\n" << std::endl;
	std::cout << "\nInitial values :\n" << std::endl;
	std::cout << "\ta is " << a << std::endl;
	std::cout << "\tb is " << b << std::endl;
	std::cout << "\tc is " << c << std::endl;
	std::cout << "\td is " << d << std::endl;
	std::cout << "\te is " << e << std::endl;

	std::cout << "\n\n------------------------";
	std::cout << "------------------------\n" << std::endl;

	std::cout << "\n\t\tCOMPARISON OPERATORS : \n" << std::endl;

	std::cout << "max / min\n" << std::endl;
	std::cout << "\tmax(a, b) = " << Fixed::max(a, b) << std::endl;
	std::cout << "\tmin(a, b) = " << Fixed::min(a, b) << std::endl;
	std::cout << "\tmax(c, d) = " << Fixed::max(c, d) << std::endl;
	std::cout << "\tmin(b, e) = " << Fixed::min(b, e) << std::endl;

	std::cout << "\nother funnsies\n" << std::endl;
	std::cout << "\t(a < e)  ? = " << (a < e ? "True" : "False") << std::endl;
	std::cout << "\t(c <= a) ? = " << (c <= a ? "True" : "False") << std::endl;
	std::cout << "\t(e > b)  ? = " << (e > b ? "True" : "False") << std::endl;
	std::cout << "\t(d >= e) ? = " << (d >= e ? "True" : "False") << std::endl;
	std::cout << "\t(b == e) ? = " << (b == e ? "True" : "False") << std::endl;
	std::cout << "\t(b != e) ? = " << (b != e ? "True" : "False") << std::endl;

	std::cout <<  "\n\n------------------------";
	std::cout << "------------------------" << std::endl;

	std::cout << "\n\n\t\tARITHMETIC OPERATORS :" << std::endl;

	std::cout << "\n\naddition : \n" << std::endl;
	std::cout << "\tStart value of a : " << a << std::endl;
	std::cout << "\n\ta = b + b" << std::endl;
	std::cout << "\ta = " << b << " + " << b << std::endl;
	std::cout << "\ta = " << b + b << std::endl;
	a = b + b;
	std::cout <<  "\n\tFinal value of a : " << a << std::endl;

	std::cout << "\n\nsubstraction : \n" << std::endl;
	std::cout << "\tStart value of b : " << b << std::endl;
	std::cout << "\n\tb = d - 12" << std::endl;
	std::cout << "\tb = " << d << " - 12" << std::endl;
	std::cout << "\tb = " << d - 12 << std::endl;
	b = d - 12;
	std::cout <<  "\n\tFinal value of b : " << b << std::endl;

	std::cout << "\n\nproduct : \n" << std::endl;
	std::cout << "\tStart value of c : " << c << std::endl;
	std::cout << "\tc = c * 4" << std::endl;
	std::cout << "\tc = " << c << " * 4" << std::endl;
	std::cout << "\tc = " << c * 4 << std::endl;
	c = c * 4;
	std::cout <<  "\n\tFinal value of c : " << c << std::endl;

	std::cout << "\n\ndivision : \n" << std::endl;
	std::cout << "\tStart value of d : " << d << std::endl;
	std::cout << "\n\td = 1764 / d.toInt()" << std::endl;
	std::cout << "\td = " << "1764 / " << d.toInt() << std::endl;
	std::cout << "\td = " << 1764 / d.toInt() << std::endl;
	d = 1764 / d.toInt();
	std::cout <<  "\n\tFinal value of d : " << d << std::endl;

	std::cout << "\n\nspecial case : \n" << std::endl;
	std::cout << "\tStart value of e : " << e << std::endl;
	std::cout << "\n\te = d / (a - e * 2)" << std::endl;
	std::cout << "\te = " << d << " / (" << a << " - " << e * 2 << ")" << std::endl;
	e = d / (a - e * 2);
	std::cout <<  "\n\tFinal value of e : " << e << std::endl;

	std::cout <<  "\n\n------------------------";
	std::cout << "------------------------" << std::endl;

	std::cout <<  "\n\n\t\tINCREMENT/DECREMENT OPERATORS :" << std::endl;

	std::cout << "\nIncrement with b(" << b << ")\n" << std::endl;
	std::cout << "\tb++ (post): \t" << b++ << std::endl;
	std::cout << "\tb is now :\t" << b << std::endl;
	std::cout << "\t++b (pre): \t" << ++b << std::endl;
	std::cout << "\tb is now :\t" << b << std::endl;

	std::cout << "\nDecrement with b(" << b << ")\n" << std::endl;
	std::cout << "\tb-- (post): \t" << b-- << std::endl;
	std::cout << "\tb is now :\t" << b << std::endl;
	std::cout << "\t--b (pre): \t" << --b << std::endl;
	std::cout << "\tb is now :\t" << b << std::endl;

	std::cout << "\n\n---------------------- END ---------------------\n" << std::endl;

	return (0);
}
