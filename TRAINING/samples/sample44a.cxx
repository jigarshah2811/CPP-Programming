
        // sample44a

	#include <iostream>
	#include <iomanip>
	#include <fstream>

	ostream &setspaces(ostream &stream,int N)
	{
	int	curwidth;
	curwidth=stream.width();
	stream << std::setw(N) << " ";
	stream << std::setw(curwidth);
	return stream;
	}


	/*OMANIP(int) spaces(int N)
	{
	return OMANIP(int)(&setspaces,N);
	}  */

	int main()
	{

	float  number = 3234.45;

	std::cout << "number is: " << number << spaces(5) << " unmanipulated" << std::endl;
	return 0;

	}
