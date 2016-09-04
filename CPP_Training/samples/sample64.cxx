
        // sample64

	#include <iostream>
	using namespace std;

	namespace sample{
			long int x;
			long int y;
			}
	int main()
	{
	long int a=5;
	long int b=10;

	sample::x=5;
	sample::y=10;
	
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
	cout << "x= " << sample::x << endl;
	cout << "y= " << sample::y << endl;	
  	return 0;
	}
