
        // sample24

	#include <iostream.h>

	inline int abs(int n) { return n < 0 ? -n : n ; }

	inline long int abs(long int n) { return n < 0 ? -n : n ; }

	inline double abs(double n) { return n < 0 ? -n : n ; }

	main()
	{

	std::cout <<  "absolute value of -10 is : " <<  abs((short)-10) <<  std::endl;


	std::cout <<  "absolute value of -10 (longword) is : "
     	     <<  abs((long)-10) <<  std::endl;


	std::cout <<  "absolute value of -10.05 is : " <<  abs(-10.05) <<  std::endl;
	


	return 0;

	}


