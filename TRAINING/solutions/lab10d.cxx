        // lab10d

        #include <iostream>

	namespace temp{
        template <typename X> void swap (X &x, X &y)
        {
        register X t;

        t = x;
        x = y;
        y = t;

        }
	};

        int main()
        {

        long int a=15,b=30;
	float    c=3.3,d=4.4;

        std::cout << "a: " << a <<","<< "b:  " << b <<  std::endl;
        std::cout << "c: " << c <<","<< "d:  " << d <<  std::endl;


	temp::swap(a,b);
	temp::swap(c,d);

        std::cout << "After swap operation:" << std::endl;

        std::cout << "a: " << a <<","<< "b:  " << b <<  std::endl;
        std::cout << "c: " << c <<","<< "d:  " << d <<  std::endl;

        return 0;

        }
