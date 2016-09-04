        // sample50_main

	#include <iostream>

	#include <sample50.h>

	int main()
	{
	ov object(10,11);
	long int x,y;

	object++;

	object.get_a_b(x,y);

	std::cout << "object++ a:" << x <<"  " << "object++ b:"
     	     << y << std::endl;

	return 0;
	}
