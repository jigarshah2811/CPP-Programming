
        // sample23

	#include <iostream>

	int  abs(short int number);
	long int abs(long int number);
	double abs(double number);

	int main()
	{

	std::cout <<  "absolute value of -10 is : " <<  abs(-10) <<  std::endl;


	std::cout <<  "absolute value of -10 (longword) is : "
     	     <<  abs((long)-10) <<  std::endl;


	std::cout <<  "absolute value of -10.05 is : " <<  abs(-10.05) <<  std::endl;

	return 0;

	}

	int abs(int n) { return n < 0 ? -n : n ; }

	long int abs(long int n) { return n < 0 ? -n : n ; }

	double abs(double n) { return n < 0 ? -n : n ; }

