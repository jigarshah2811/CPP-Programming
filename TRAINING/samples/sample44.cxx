        // sample44

	#include <iostream>

	std::ostream &sethex(std::ostream &stream)
	{
	stream.setf(std::ios::showbase);
	stream.setf(std::ios::hex, std::ios::basefield);
	stream.setf(std::ios::uppercase);
	return stream;
	}

	std::ostream &resethex(std::ostream &stream)
	{
	stream.unsetf(std::ios::uppercase);
	stream.unsetf(std::ios::showbase);
	stream.setf(std::ios::dec | std::ios::basefield);
	return stream;
	}


	int main()
	{
	int number=100;
	char arr[5] = "shah";
	std::cout << "number unmanipulated is: " << sethex << number << std::endl;
	std::cout << "number manipulated is : " << resethex << number << std::endl;
	
	std::cout << "string unmanipulated is: " << sethex << arr << std::endl;
	std::cout << "string manipulated is : " << resethex << arr << std::endl;
	//std::cout << "string unmanipulated is: " << sethex << str << std::endl;
	//std::cout << "string manipulated is : " << resethex << str << number << std::endl;
	return 0;

	}
