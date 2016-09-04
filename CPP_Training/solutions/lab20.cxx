        // lab20

	#include <iostream>
	#include <iomanip>

	std::ostream &sethex (std::ostream &stream)
	{
	stream.setf(std::ios::showbase);
	stream.setf(std::ios::hex,std::ios::basefield);
	stream.setf(std::ios::uppercase);
	return stream;
	}

	std::ostream &reset (std::ostream &stream)
	{
	stream.unsetf(std::ios::hex | std::ios::uppercase | std::ios::showbase);
	return stream;
	}

	int main()
	{

	std::cout << sethex << 100 << std::endl;
	std::cout << sethex << 200 << std::endl;

	std::cout << reset << 100 << std::endl;
	std::cout << reset << 200 << std::endl;
	return 0;
	}
