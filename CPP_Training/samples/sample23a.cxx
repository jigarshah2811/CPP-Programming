        // sample23a

	#include <iostream>
	#include <cmath>

	int  std::abs(short int number);
	long int std::abs(long int number);
	double std::abs(double number);

	int main()
	{

	std::cout <<  "absolute value of -10 is : " <<  (short)std::abs(-10) <<  std::endl;


	std::cout <<  "absolute value of -10 (longword) is : "
     	     <<  std::abs((long)-10) <<  std::endl;


	std::cout <<  "absolute value of -10.05 is : " <<  std::abs(-10.05) <<  std::endl;

	return 0;

	}

	int std::abs(short int n) { return n < 0 ? -n : n ; }

	long int std::abs(long int n) { return n < 0 ? -n : n ; }

	double std::abs(double n) { return n < 0 ? -n : n ; }

