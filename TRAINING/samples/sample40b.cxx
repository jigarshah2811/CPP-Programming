
        //sample40b

        #include <iostream>

	long int &&f();
	
	int main()
	{
	f() = 100;

	std::cout << "value in number is: " << f() << std::endl;
	
	return 0;
	}

	long int &&f()
	{ 
	static long int x=5;
	return x; 
	}
