        // sample62

	#include <iostream>

	void function1() throw(char)
	{
	std::cout << "in function, ready to throw..." << std::endl;
	throw 'a';
	}
	
	int main()
	{
		
	std::cout << "before try block...." << std::endl;

	try{
		std::cout << "inside try block" << std::endl;
		function1();
		std::cout << "finishing try block" << std::endl;
	   }

	catch(int x){
		   std::cout << "caught exception " << x << std::endl;
		  }
	std::cout << "after try block" << std::endl;
  	return 0;
	}
