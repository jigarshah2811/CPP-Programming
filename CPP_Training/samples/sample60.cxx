        // sample60

	#include <iostream>

	int main()
	{
	std::cout << "before try block...." << std::endl;

	try{
		std::cout << "inside try block" << std::endl;
		throw 100;
		std::cout << "finishing try block" << std::endl;
	   }

	catch(int i){
			 std::cout << "caught exception" << std::endl;
			 std::cout << "value passed is " << i << std::endl;
			 } 	

	std::cout << "after try block" << std::endl;
  	return 0;
	}
