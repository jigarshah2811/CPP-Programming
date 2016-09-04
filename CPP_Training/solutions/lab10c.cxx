
        // lab10c

        #include <iostream>

        void swap (long int &x,long int &y);
	void swap (float &x,float &y);

        int main()
        {

        long int a=15,b=30;
	float    c=3.3,d=4.4;
        
	std::cout << "Before swap operation:" << std::endl;

        std::cout << "a: " << a <<","<< "b:  " << b <<  std::endl;
	std::cout << "c: " << c <<","<< "d:  " << d <<  std::endl;


        swap(a,b);
	swap(c,d);

        std::cout << "After swap operation:" << std::endl;

        std::cout << "a: " << a <<","<< "b:  " << b <<  std::endl;
	std::cout << "c: " << c <<","<< "d:  " << d <<  std::endl;

        return 0;

        }

        void swap (long int &x, long int &y)
        {
        register long int t;

        t = x;
        x = y;
        y = t;

        }

	void swap (float &x, float &y)
        {
        register float t;

        t = x;
        x = y;
        y = t;

        }

