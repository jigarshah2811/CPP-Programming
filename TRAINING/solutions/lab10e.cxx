
        // lab10e

        #include <iostream>
	#include <string>
	#include "myheader.h"

	
        int main()
        {

        long int a=15,b=30;
	float    c=3.3,d=4.4;
	string   e="phil",f="lovecchio";

        std::cout << "a: " << a <<","<< "b:  " << b <<  std::endl;
        std::cout << "c: " << c <<","<< "d:  " << d <<  std::endl;
	std::cout << "e: " << e <<","<< "f:  " << f <<  std::endl;


	temp::swap(a,b);
	temp::swap(c,d);
	temp::swap(e,f);

        std::cout << "After swap operation:" << std::endl;

        std::cout << "a: " << a <<","<< "b:  " << b <<  std::endl;
        std::cout << "c: " << c <<","<< "d:  " << d <<  std::endl;
	std::cout << "e: " << e <<","<< "f:  " << f <<  std::endl;

        return 0;

        }


