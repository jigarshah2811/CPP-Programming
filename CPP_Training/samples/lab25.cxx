
        // lab25

	#include <iostream>
	using namespace std;
	
	void divide(double a,double b);

	int main()
	{
	double c,d;

	do {
	   cout << "Enter numerator (0 to end:) ";
	   cin >> c;
	   cout << "Enter denominator: ";
	   cin >> d;
	   divide(c,d);
	   } while (c != 0);

  	return 0;
	}

	void divide(double a,double b)
	{
	try{
	    if (b==0) throw b;
	    cout << "Quotient: " << a/b << endl;
	   }
	catch(double b){cout << "divide by zero"<<endl;
		       }
	}