
        // lab10c

        #include <iostream>

	namespec temp{
        template <typename X> void swap (X &x, X &y)
        {
        register long int t;

        t = x;
        x = y;
        y = t;

        }
	};

        int main()
        {

        long int a,b;

        a = 15;
        b = 30;

        std::cout << "a: " << a <<","<< "b:  " << b <<  std::endl;


	temp::swap(a,b);

        std::cout << "After swap operation:" << std::endl;

        std::cout << "a: " << a <<","<< "b:  " << b <<  std::endl;

        return 0;

        }


