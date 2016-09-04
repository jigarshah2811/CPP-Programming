
        // sample65b

	#include <iostream>
	

	namespace sample{
			long int x;
			long int y;
			}

	int main()
	{
	long int a=5;
	long int b=10;

	sample::x=5;
	sample::y=10;
	
	std::cout << "a= " << a << std::endl;
	std::cout << "b= " << b << std::endl;
	std::cout << "x= " << sample::x << std::endl;
	std::cout << "y= " << sample::y << std::endl;	
  	return 0;
	}
