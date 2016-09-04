        // lab25

	#include <iostream>
	
	void divide(double a,double b);

	int main()
	{
	double c,d;

	do {
	   std::cout << "Enter numerator (0 to end:) ";
	   std::cin >> c;
	   std::cout << "Enter denominator: ";
	   std::cin >> d;
	   divide(c,d);
	   } while (c != 0);

  	return 0;
	}

	void divide(double a,double b)
	{
	try{
	    if (b==0) throw b;
	    std::cout << "Quotient: " << a/b << std::endl;
	   }
	catch(double b){std::cout << "divide by zero"<<std::endl;
		       }
	}
