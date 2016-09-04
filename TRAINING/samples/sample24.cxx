        // sample24

	#include <iostream>

	namespace temp{	
	int  abs(short int number);
	long int abs(long int number);
	double abs(double number);

	inline int abs(short int n) { return n < 0 ? -n : n ; }

	inline long int abs(long int n) { return n < 0 ? -n : n ; }

	inline double abs(double n) { return n < 0 ? -n : n ; }
	}

	int main()
	{

	std::cout <<  "absolute value of -10 is : " <<  temp::abs((short)-10) <<  std::endl;


	std::cout <<  "absolute value of -10 (longword) is : "
     	     <<  temp::abs((long)-10) <<  std::endl;


	std::cout <<  "absolute value of -10.05 is : " <<  temp::abs(-10.05) <<  std::endl;

	return 0;

	}



