
        //sample40a

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
	long int x=5;
	return x; 
	}
