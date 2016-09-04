        // sample44

	#include <iostream>

	std::ostream &setup(std::ostream &stream)
	{
	stream.width(10);
	stream.setf(std::ios::showpoint | std::ios::fixed);
	stream.precision(4);
	return stream;
	}

	int main()
	{

	float  number = 3234.45;

	std::cout << "number unmanipulated is: " << number << std::endl;
	std::cout << "number manipulated is : " << setup << number << std::endl;
	return 0;

	}
